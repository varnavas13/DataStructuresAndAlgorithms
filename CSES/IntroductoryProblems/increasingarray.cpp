#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll cnt=0,n;
    cin>>n;
    ll arr[n];
    for(ll i=0;i<n;i++)
    cin>>arr[i];
    for(ll i=1;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {}
        else
        {
            cnt+=(arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }
    cout<<cnt;
}