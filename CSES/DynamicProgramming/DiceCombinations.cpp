#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll modulo=1000000007;
    ll n;
    cin>>n;
    ll arr[n+1];
    arr[0]=1;
    arr[1]=1;
    for(ll i=2;i<=n;i++)
    {
        arr[i]=0;
        for(ll k=1;k<=6&&k<=i;k++)
        {
            arr[i]=(arr[i]+arr[i-k])%modulo;
        }
    }
    cout<<arr[n];
    return 0;
}