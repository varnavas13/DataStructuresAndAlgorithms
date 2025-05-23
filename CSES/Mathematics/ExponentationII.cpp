#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll modulo=1e9+7;
ll modulo2=modulo-1;
 ll power(ll a,ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll x=power(a,b/2);
    x=x%modulo2;
    ll result=x*x;
    result=result%modulo2;
    if(b%2==0)
    return result%modulo2;
    else return (result*a)%modulo2;
    
}
 ll power2(ll a,ll b)
{
    if(b==0)
    return 1;
    if(b==1)
    return a;
    ll x=power2(a,b/2);
    x=x%modulo;
    ll result=x*x;
    result=result%modulo;
    if(b%2==0)
    return result%modulo;
    else return (result*a)%modulo;
    
}

int main()
{
   ll t;
   cin>>t;
   while(t--)
   {
       ll a,b,c;
       cin>>a>>b>>c;
       ll temp=(power(b,c));
       cout<<power2(a,temp)<<"\n";
   }
    return 0;
}
