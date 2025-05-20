#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    string s;
    cin>>s;
    ll mx=1;
    ll cnt=1;
    for(ll i=1;i<s.size();i++)
    {
        if(s[i]==s[i-1])
        {
            cnt++;
            mx=max(mx,cnt);
        }
        else
        cnt=1;
    }
    cout<<mx;
}