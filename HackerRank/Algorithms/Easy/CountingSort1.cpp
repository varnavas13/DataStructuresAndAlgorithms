#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main ()
{
    ll n;
    cin>>n;
    ll arr[100]={};
    for(ll i=0;i<n;++i)
    {
        ll tmp;
        cin>>tmp;
        arr[tmp]++;
    }
    for(ll i=0;i<100;++i)
    cout<<arr[i]<<' ';
}
