#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

void run()
{
    int n;
    cin >> n;
    vector<int> a(n+1);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x<=n) a[x]++;
    }
    for(int i=n/2;i>0;i--){
        for(int j=2*i;j<=n;j+=i){
            a[j]+=a[i];
        }
    }
    cout << *max_element(a.begin(),a.end()) << endl;
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T=1;
    cin >> T;
    while(T--){
        run();
    }
    return 0;
}
