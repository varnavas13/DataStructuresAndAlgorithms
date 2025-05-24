class Solution {
public:
    int maxSubstrings(string word) {
        int n = word.size();
        vector<vector<int>> pos(26);
        for (int i = 0; i < n; ++i) {
            pos[word[i] - 'a'].push_back(i);
        }
        vector<pair<int, int>> intervals;
        for (int i = 0; i < n; ++i) {
            char c = word[i];
            vector<int>& lst = pos[c - 'a'];
            auto it = lower_bound(lst.begin(), lst.end(), i + 3);
            if (it != lst.end()) {
                int j = *it;
                intervals.emplace_back(i, j);
            }
        }
        sort(intervals.begin(), intervals.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second < b.second;
        });
        int count = 0;
        int last_end = -1;
        for (const auto& interval : intervals) {
            int s = interval.first;
            int e = interval.second;
            if (s > last_end) {
                ++count;
                last_end = e;
            }
        }
        return count;
    }
};