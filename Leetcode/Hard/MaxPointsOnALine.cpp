class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int n = points.size();
        if (n <= 2) return n;

        int maxCount = 2;

        for (int i = 0; i < n; i++) {
            map<pair<double, double>, int> mp;
            for (int j = i + 1; j < n; j++) {
                if (points[i][0] == points[j][0]) {
                    double x = points[i][0];
                    mp[{numeric_limits<double>::infinity(), x}]++;
                } else {
                    double slope = (double)(points[j][1] - points[i][1]) / (points[j][0] - points[i][0]);
                    double b = points[i][1] - slope * points[i][0];
                    mp[{slope, b}]++;
                }
            }

            for (const auto& [_, count] : mp) {
                maxCount = max(maxCount, count + 1);  
            }
        }

        return maxCount;
    }
};