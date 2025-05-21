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
        string s1="";
     char a[8][8];
     for(ll i=0;i<8;++i)
     for(ll k=0;k<8;++k)
     {
         cin>>a[i][k];
         if(a[i][k]!='.')
         s1+=a[i][k];
     }
     cout<<s1<<"\n";
    }
}