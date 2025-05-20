#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    ll sum=n*(n+1)/2;
    if(sum%2==1)
    cout<<"NO";
    else
    {
        vector<ll>v1,v2;
        ll temp=sum/2;
        for(ll i=n;i>=1;i--)
        {
            if(i<=temp)
            {
            v1.push_back(i);
            temp-=i;
            }
            else
            v2.push_back(i);
        }
        ll sm1=0,sm2=0;
        for(ll i=0;i<v1.size();i++)
        sm1+=v1[i];
        for(ll i=0;i<v2.size();i++)
        sm2+=v2[i];
        if(sm1==sm2&&sm1+sm2==sum)
        {
            cout<<"YES"<<"\n";
            cout<<v1.size()<<"\n";
            for(ll i=v1.size()-1;i>=0;i--)
            cout<<v1[i]<<' ';
            cout<<"\n";
            cout<<v2.size()<<"\n";
            for(ll i=v2.size()-1;i>=0;i--)
            cout<<v2[i]<<' ';
            
        }
        else
        cout<<"NO";
    }
    return 0;
}