#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll result =1;
    ll n;
    cin>>n;
    for(ll i=1;i<=n;i++)
    {
        result=result*2;
        result=result%1000000007;
    }
    cout<<result;
}