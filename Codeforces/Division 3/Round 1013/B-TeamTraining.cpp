#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
       ll n,x;
       cin>>n>>x;
       vector<ll> v;
       for(ll i=0;i<n;i++)
       {
           ll temp;
           cin>>temp;
           v.push_back(temp);
       }
       sort(v.begin(),v.end());
       ll ans=0;
       ll length=0;
       for(ll i=n-1;i>=0;i--)
       {
           if(v[i]>=x)
           {
               length=0;
               ans++;
           }
           else
           {
               length++;
               if(length*v[i]>=x)
               {
                   length=0;
                   ans++;
               }
           }
       }
       cout<<ans;
        
        
        
        
        cout<<"\n";
    }
    return 0;
    
}