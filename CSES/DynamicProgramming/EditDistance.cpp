#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    ll n=s1.size();
    ll m=s2.size();
    ll opt[n+1][m+1];
    for(ll i=0;i<=n;i++)
    opt[i][0]=i;
    for(ll i=0;i<=m;i++)
    opt[0][i]=i;
    for(ll i=1;i<=n;i++)
    {
        for(ll k=1;k<=m;k++){
        if(s1[i-1]==s2[k-1])
        opt[i][k]=opt[i-1][k-1];
        else
        opt[i][k]=min(min(opt[i-1][k-1],opt[i-1][k]),opt[i][k-1])+1;
        }
    }
    cout<<opt[n][m];
    
}