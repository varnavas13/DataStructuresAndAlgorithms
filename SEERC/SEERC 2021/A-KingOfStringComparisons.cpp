#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   ll n;
   cin>>n;
   string s1,s2;
   cin>>s1>>s2;
   reverse(s1.begin(),s1.end());
   reverse(s2.begin(),s2.end());
   ll ans=0;
   ll prev=0;
   for(ll i=0;i<n;++i)
   {
       if(s1[i]<s2[i])
       {
           ans+=i+1;
           prev=i+1;
       }
       else if(s1[i]==s2[i])
       ans+=prev;
       else
       prev=0;
   }
   cout<<ans;
}