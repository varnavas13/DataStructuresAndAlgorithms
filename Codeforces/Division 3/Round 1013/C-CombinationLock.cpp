#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 1) {
            cout << 1 << endl;
        } 
        else if (n % 2 == 0) {
            cout << -1 << endl;
        } 
        else {
            int mid = (n + 1) / 2;
            vector<int> perm;
            
            for (int i = 0; i < (n - 1) / 2; i++) {
                perm.push_back(mid + i);
                perm.push_back(i + 1);
            }
            perm.push_back(n);
            
            for (int i = 0; i < n; i++) {
                cout << perm[i] << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    return 0;
}
