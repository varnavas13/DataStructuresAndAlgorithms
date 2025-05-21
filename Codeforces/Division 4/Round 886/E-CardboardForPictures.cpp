#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin >> t;

    while (t--) {
        ll n, h;
        cin >> n >> h;
        __int128 emv=h;

        __int128 a = 0, b = 0;

        for (ll i = 0; i < n; ++i) {
            ll x;
            cin >> x;
            emv -= (x * x);
            a += 4;
            b += (4 * x);
        }

        __int128 gcd = __gcd(a, b);
        gcd = __gcd(gcd, emv);
        a /= gcd;
        b /= gcd;
        emv /= gcd;

        __int128 diakr = b * b + 4 * a * emv;

         ll sqrtDiakr = sqrtl(diakr);

        ll ans = (sqrtDiakr - b) / (2 * a);
        cout << ans << "\n";
    }
    return 0;
}
