#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long int ull;
typedef long long ll;

int main() {
    ull a[10];
    a[0]=1;
    a[1]=1;
    a[2]=2;
    a[3]=6;
    a[4]=24;
    a[5]=120;
    a[6]=720;
    a[7]=5040;
    a[8]=40320;
    a[9]=362880;
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    ull sm=1;
    for(ll i=19;i<t;i++)
    {
        ull sum=1;
        ll temp=i;
        while(temp>0)
        {
         sum+=a[temp%10];
         temp/=10;   
        }
        --sum;
        if(sum%i==0)
        sm+=i;
    }   
    cout<<sm-1;
    return 0;
}
