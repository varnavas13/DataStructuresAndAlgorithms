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
        ll n;
        cin>>n;
        ll mn1=INT_MAX,mn2=mn1,mn12=mn1;
        for(ll i=0;i<n;++i)
        {
            ll x;
            string s;
            cin>>x>>s;
            if(s=="10")
            mn1=min(x,mn1);
            else if(s=="01")
            mn2=min(mn2,x);
            else if(s=="11")
            mn12=min(x,mn12);
        }
        if(mn1+mn2>=INT_MAX&&mn12>=INT_MAX)
        cout<<-1;
        else
        cout<<min(mn12,mn1+mn2);
        
        cout<<"\n";
    }
}