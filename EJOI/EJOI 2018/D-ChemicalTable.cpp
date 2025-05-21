#include <bits/stdc++.h>

using namespace std;

const int MX = 2 * 1000 * 1000 + 7;

vector<int> g[MX];
bool was[MX];

void dfs(int v) {
    was[v] = true;
    for (int to : g[v]) {
        if (!was[to]) {
            dfs(to);
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n, m, q;
    cin >> n >> m >> q;
    if (q == 0) {
        cout << n + m - 1 << "\n";
        
        return 0;
    }
    for (int i = 1; i <= q; ++i) {
        int x, y;
        cin >> x >> y;
        g[x].push_back(n + y);
        g[n + y].push_back(x);
    }
    int anyv = -1;
    for (int i = 1; i <= n + m; ++i) {
        if (g[i].size() != 0) {
            anyv = i;
            break;
        }
    }
    dfs(anyv);
    int anyx = -1, anyy = -1;
    for (int i = 1; i <= n; ++i) {
        if (was[i]) {
            anyx = i;
        }
    }
    for (int i = n + 1; i <= n + m; ++i) {
        if (was[i]) {
            anyy = i - n;
        }
    }
    vector<pair<int, int> > ans;
    for (int i = 1; i <= n; ++i) {
        if (!was[i]) {
            ans.emplace_back(i, anyy);
            dfs(i);
        }
    }
    for (int i = n + 1; i <= n + m; ++i) {
        if (!was[i]) {
            ans.emplace_back(anyx, i - n);
        }
    }
    cout << ans.size() << "\n";
   
    return 0;
}


