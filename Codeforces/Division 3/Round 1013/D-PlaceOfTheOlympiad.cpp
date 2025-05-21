#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
    ll t;
    cin>>t;
    while(t--){
    long long n, m, k;
    cin >> n >> m >> k;
    if (k == 0) {
        cout << 0 << endl;
        return 0;
    }
    long long low = 1, high = m;
    long long ans = m;
    while (low <= high) {
        long long mid = (low + high) / 2;
        long long x_max = ((m + 1) * mid) / (mid + 1);
        x_max = min(x_max, m);
        long long total = x_max * n;
        if (total >= k) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
    }
    return 0;
}