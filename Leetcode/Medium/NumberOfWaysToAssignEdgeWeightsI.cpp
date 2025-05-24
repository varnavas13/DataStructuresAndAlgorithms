class Solution {
public:
    const int MOD = 1e9 + 7;

    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n = edges.size() + 1;
        vector<vector<int>> tormisqued(n + 1); 

        for (auto& e : edges) {
            tormisqued[e[0]].push_back(e[1]);
            tormisqued[e[1]].push_back(e[0]);
        }

        queue<pair<int, int>> q;  
        vector<bool> visited(n + 1, false);
        q.push({1, 0});
        visited[1] = true;

        int maxDepth = 0;

        while (!q.empty()) {
            auto [node, depth] = q.front(); q.pop();
            maxDepth = max(maxDepth, depth);

            for (int neighbor : tormisqued[node]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, depth + 1});
                }
            }
        }

        return power(2, maxDepth - 1, MOD);
    }

    int power(long long base, int exp, int mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2) result = (result * base) % mod;
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }
};
©leetcode