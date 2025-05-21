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
        ll x;
        cin>>x;
        ll cnt0=0;
        ll cnt1=0;
        ll cnt2=0;
        ll cnt5=0;
        ll cnt3=0;
        ll ans=0;
        bool found=false;
        for(ll i=0;i<x;i++)
        {
            ll temp;
            cin>>temp;
            if(temp==0)
            cnt0++;
            else if(temp==2)
            cnt2++;
            else if(temp==3)
            cnt3++;
            else if(temp==1)
            cnt1++;
            else if(temp==5)
            cnt5++;
            if(found==false&&cnt0>=3&&cnt1>=1&&cnt3>=1&&cnt2>=2&&cnt5>=1)
            {ans=i+1;found=true;}
        }
        cout<<ans;
        
        
        
        
        cout<<"\n";
    }
    return 0;
    
}