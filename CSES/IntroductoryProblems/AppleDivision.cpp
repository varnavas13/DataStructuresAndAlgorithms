#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   
   ll n;
   cin>>n;
   ll arr[n];
   for(ll i=0;i<n;i++)
   cin>>arr[i];
    ll mn=INT_MAX;
    for(ll i=1;i<(1<<n);i++)
    {
        ll sm1=0,sm2=0;
        for(ll k=0;k<n;k++)
        {
            if(i&(1<<k))
            sm1+=arr[k];
            else
            sm2+=arr[k];
        }
        mn=min(mn,abs(sm1-sm2));
    }
    cout<<mn;
    return 0;
}