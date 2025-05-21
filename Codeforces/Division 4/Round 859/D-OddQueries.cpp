#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    
    for(ll q=0;q<n;++q)
    {
       ll sz,queries;
       cin>>sz>>queries;
       ll a[sz+1]={};
       for(ll i=1;i<=sz;++i)
       {
           ll tmp;
           cin>>tmp;
           a[i]=a[i-1]+tmp;
       }
       for(ll i=0;i<queries;++i)
       {
           ll smplin;
           ll aa,b,c;
           cin>>aa>>b>>c;
           smplin=a[b]-a[aa-1];
           ll sm=a[sz]-smplin;
           sm+=(c*(b-aa+1));
           if(sm%2==0)
           cout<<"NO";
           else
           cout<<"YES";
           cout<<"\n";
       }
    }
   
}