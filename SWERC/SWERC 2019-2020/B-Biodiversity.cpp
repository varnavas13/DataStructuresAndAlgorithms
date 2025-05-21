#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   ll n;
   cin>>n;
   unordered_map<string,ll>mp;
   string a[n];
   for(ll i=0;i<n;++i)
   {
       cin>>a[i];
       mp[a[i]]++;
   }
   for(ll i=0;i<n;++i)
   {
       if(mp[a[i]]>n/2)
       {
           cout<<a[i];
           return 0;
       }
   }
   cout<<"NONE";
   return 0;
}