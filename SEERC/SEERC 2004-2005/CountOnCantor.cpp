#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
int main()
{
    ll t;
    cin>>t;
    while(t--){
    ll x;
    cin>>x;
    ld temp=2*x;
    ld iporrizo=1+4*temp;
    ld riza=sqrt(iporrizo);
    ld result=-1+riza;
    result/=2;
    result=ceil(result);
    ll cnt=(result-1)*(result)/2;
    ++cnt;
    ll a,b;
    if(((ll)(result))%2==1)
    {
        a=result;
        b=1;
        a-=(x-cnt);
        b+=(x-cnt);
    }
    else
    {
        a=1;
        b=result;
        a+=(x-cnt);
        b-=(x-cnt);
    }
    cout<<"TERM "<<x<<" IS "<<a<<'/'<<b<<"\n";

        
    }
    return 0;
}