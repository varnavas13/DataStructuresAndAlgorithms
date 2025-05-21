#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        string s="codeforces";
        ll cnt=0;
        string s2;
        cin>>s2;
        for(ll i=0;i<s.size();++i)
        if(s[i]!=s2[i])
        ++cnt;
        cout<<cnt;
        
        
        
        
        
        
        
        cout<<"\n";
    }
}