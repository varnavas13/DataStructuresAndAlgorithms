#include<bits/stdc++.h>
#define pii pair<int,int>
#define pb push_back
typedef long long int ll;
using namespace std;
const int max_n=2e5+3;
ll a[max_n];

void solve(){
	int n;
	cin >> n;
	for(int i=1;i<=n;i++) cin >> a[i];
	sort(a+1,a+1+n);
	int ok=1;
	if(a[1]!=1) ok=0;
	ll sum=1;
	for(int i=2;i<=n;i++){
		if(a[i]>sum) ok=0;
		sum+=a[i];
	}
	if(ok) cout << "YES" << endl;
	else cout << "NO" << endl;
}

int main(){
	ios::sync_with_stdio(false);cin.tie(0);
	int t=1;
	cin >> t;
	while(t--){
		solve();
	}
}