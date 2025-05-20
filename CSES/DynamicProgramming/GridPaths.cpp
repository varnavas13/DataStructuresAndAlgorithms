#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll n;
    cin>>n;
    char arr[n][n];  
    ll opt[n][n];
    for(ll i=0;i<n;i++)
    {
        for(ll k=0;k<n;k++)
        {
            cin>>arr[i][k];
            opt[i][k]=0;
        }
    }
        ll modulo=1000000007;
    opt[0][0]=1;
    if(arr[0][0]=='*')
    opt[0][0]=0;
    for(ll i=1;i<n;i++)
    {
        if(arr[i][0]=='.'&&arr[i-1][0]=='.')
        opt[i][0]=1;
        else
        break;
    }
    for(ll i=1;i<n;i++)
    {
        if(arr[0][i]=='.'&&arr[0][i-1]=='.')
        opt[0][i]=1;
        else
        break;
    }
    for(ll i=1;i<n;i++)
    {
        for(ll k=1;k<n;k++)
        {
            opt[i][k]=(opt[i-1][k]+opt[i][k-1])%modulo;
            if(arr[i][k]=='*')
            opt[i][k]=0;
        }
    }
    cout<<opt[n-1][n-1];
}