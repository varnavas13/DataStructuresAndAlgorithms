class Solution {
public:
    const int MOD = 1e9 + 7;
    int LOG;
    vector<vector<int>> cruvandelk; 
    vector<vector<int>> up;
    vector<int> depth;

    void dfs(int node, int parent) {
        up[node][0] = parent;
        for (int i = 1; i < LOG; ++i)
            up[node][i] = up[up[node][i - 1]][i - 1];

        for (int nei : cruvandelk[node]) {
            if (nei != parent) {
                depth[nei] = depth[node] + 1;
                dfs(nei, node);
            }
        }
    }

    int lca(int u, int v) {
        if (depth[u] < depth[v])
            swap(u, v);
        for (int i = LOG - 1; i >= 0; --i)
            if (depth[u] - (1 << i) >= depth[v])
                u = up[u][i];
        if (u == v) return u;
        for (int i = LOG - 1; i >= 0; --i)
            if (up[u][i] != up[v][i]) {
                u = up[u][i];
                v = up[v][i];
            }
        return up[u][0];
    }

    int modPow(long long base, int exp) {
        long long res = 1;
        while (exp > 0) {
            if (exp % 2) res = (res * base) % MOD;
            base = (base * base) % MOD;
            exp /= 2;
        }
        return res;
    }

    vector<int> assignEdgeWeights(vector<vector<int>>& edges, vector<vector<int>>& queries) {
        int n = edges.size() + 1;
        cruvandelk.assign(n + 1, {});
        for (auto& e : edges) {
            cruvandelk[e[0]].push_back(e[1]);
            cruvandelk[e[1]].push_back(e[0]);
        }

        LOG = 20; 
        up.assign(n + 1, vector<int>(LOG));
        depth.assign(n + 1, 0);
        dfs(1, 1);

        vector<int> res;
        for (auto& q : queries) {
            int u = q[0], v = q[1];
            int anc = lca(u, v);
            int len = depth[u] + depth[v] - 2 * depth[anc];

            if (len == 0)
                res.push_back(0);
            else
                res.push_back(modPow(2, len - 1));
        }

        return res;
    }
};
