#include <bits/stdc++.h>

using namespace std;

const int MX = 5007;
const int INF = 1000 * 1000 * 1000 + 7;

int dp[MX][MX / 2][3];
int a[MX];

int cost(int a, int b) {
    if (a > b) {
        return 0;
    }
    return b - a + 1;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int m = (n + 1) / 2;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i <= n + 1; ++i) {
        for (int j = 0; j <= m + 1; ++j) {
            for (int k = 0; k < 3; ++k) {
                dp[i][j][k] = INF;
            }
        }
    }
    dp[0][0][2] = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= m; ++j) {
            for (int k = 0; k < 3; ++k) {
                if (dp[i][j][k] == INF) continue;
                int val = a[i];
                if (k == 1) {
                    val = min(val, a[i - 1] - 1);
                }
                {
                    int gok = min(k + 1, 2);
                    if (k != 0) {
                        dp[i + 1][j][gok] = min(dp[i + 1][j][gok], dp[i][j][k]);
                    } else {
                        dp[i + 1][j][gok] = min(dp[i + 1][j][gok], dp[i][j][k] + cost(a[i], a[i + 1]));
                    }
                }
                {
                    if (k != 0) {
                        dp[i + 1][j + 1][0] = min(dp[i + 1][j + 1][0], dp[i][j][k] + cost(a[i + 1], val));
                    }
                }
            }
        }
    }

    for (int i = 1; i <= m; ++i) {
        int best = INF;
        for (int j = 0; j <= 2; ++j) {
            best = min(best, dp[n][i][j]);
        }
        cout << best << "\n";
    }
}
