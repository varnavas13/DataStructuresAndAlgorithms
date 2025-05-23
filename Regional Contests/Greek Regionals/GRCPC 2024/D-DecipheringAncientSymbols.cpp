#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    string tablet;
    cin >> tablet;
    int m;
    cin >> m;
    vector<string> groups(m);
    for (int i = 0; i < m; ++i) {
        cin >> groups[i];
    }
    
    vector<pair<int, int>> intervals;
    for (const string& group : groups) {
        size_t pos = tablet.find(group, 0);
        while (pos != string::npos) {
            intervals.emplace_back(pos, pos + group.size() - 1);
            pos = tablet.find(group, pos + 1);
        }
    }
    
    if (intervals.empty()) {
        cout << 0 << endl;
        return 0;
    }
    
    sort(intervals.begin(), intervals.end());
    
    vector<pair<int, int>> merged;
    merged.push_back(intervals[0]);
    for (size_t i = 1; i < intervals.size(); ++i) {
        if (intervals[i].first <= merged.back().second + 1) {
            merged.back().second = max(merged.back().second, intervals[i].second);
        } else {
            merged.push_back(intervals[i]);
        }
    }
    
    int max_len = 0;
    for (const auto& interval : merged) {
        max_len = max(max_len, interval.second - interval.first + 1);
    }
    
    cout << max_len << endl;
    
    return 0;
}