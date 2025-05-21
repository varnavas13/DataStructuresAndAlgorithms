#include <bits/stdc++.h>
using namespace std;

const int MAX = 2000005; 

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    bitset<MAX> used;

    while (N--) {
        string s;
        cin >> s;

        if (!all_of(s.begin(), s.end(), ::isdigit)) continue;

        s.erase(0, s.find_first_not_of('0'));
        if (s.empty()) s = "0";

        if (s.size() > 10) continue;

        long long val = stoll(s);
        if (val >= 0 && val < MAX) {
            used[val] = true;
        }
    }

    for (int i = 0; i < MAX; ++i) {
        if (!used[i]) {
            cout << i << '\n';
            break;
        }
    }

    return 0;
}
