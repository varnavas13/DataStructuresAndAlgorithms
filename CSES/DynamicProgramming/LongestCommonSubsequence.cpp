#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<ll>ans;
    ll opt[n+1][m+1];
    ll arr1[n],arr2[m];
    for(ll i=0;i<n;i++)
    cin>>arr1[i];
    for(ll i=0;i<m;i++)
    cin>>arr2[i];
    for(ll i=0;i<=n;i++)
    opt[i][0]=0;
    for(ll i=0;i<=m;i++)
    opt[0][i]=0;
    for(ll i=1;i<=n;i++)
    {
        for(ll k=1;k<=m;k++)
        {
            if(arr1[i-1]==arr2[k-1]){
            opt[i][k]=opt[i-1][k-1]+1;
            }
            else
            opt[i][k]=max(opt[i-1][k],opt[i][k-1]);
        }
    }
    cout<<opt[n][m]<<"\n";
    ll x=n,y=m;
    while(x!=0&&y!=0)
    {
       
        
        
            if(opt[x-1][y]==opt[x][y])
            x--;
            else if(opt[x][y-1]==opt[x][y])
            y--;
        
        else if(opt[x-1][y-1]==opt[x][y]-1)
        {
            ans.push_back(arr1[x-1]);
            x--;
            y--;
        }
    }
    reverse(ans.begin(),ans.end());
    for(ll i=0;i<ans.size();i++)
    cout<<ans[i]<<" ";
    
}