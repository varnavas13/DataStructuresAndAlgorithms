#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,k;
    cin>>n>>m>>k;
    ll a[n],b[m];
    for(ll i=0;i<n;i++)
    cin>>a[i];
    for(ll i=0;i<m;i++)
    cin>>b[i];
    ll index1=0,index2=0;
    ll ans=0;
    sort(a,a+n);
    sort(b,b+m);
    while(index1<n&&index2<m)
    {
        if(a[index1]-k<=b[index2]&&a[index1]+k>=b[index2])
        {
            index1++;
            index2++;
            ans++;
        }
        else if(a[index1]-k>b[index2])
        {
            index2++;


        }
        else{
        index1++;
        }
    }
    cout<<ans;
}