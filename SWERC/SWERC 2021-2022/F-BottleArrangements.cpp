#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    { 
        ll n,m;
        cin>>n>>m;
        ll r[m],w[m];
        string s1;
        s1.clear();
        for(ll i=0;i<m;++i)
        cin>>r[i]>>w[i];
        ll mxr,mxw;
        mxr=*max_element(r,r+m);
        mxw=*max_element(w,w+m);
        if(mxw+mxr>n)
        cout<<"IMPOSSIBLE"<<"\n";
        else
        {
            for(ll i=0;i<mxr;i++)
            s1+='R';
            for(ll i=0;i<mxw;i++)
            s1+='W';
            for(ll i=mxr+mxw;i<n;i++)
            s1+='R';
            cout<<s1<<"\n";
            
        }
    }
return 0;
}