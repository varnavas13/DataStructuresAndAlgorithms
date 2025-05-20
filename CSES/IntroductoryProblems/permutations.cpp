#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   ll n;
   cin>>n;
   if(n<4&&n>1)
   cout<<"NO SOLUTION";
   else if(n==1)
   cout<<1;
   else if(n==4)
   cout<<"2 4 1 3";
   else
   {
    for(ll i=1;i<=n;i+=2)
    cout<<i<<' ';
    for(ll i=2;i<=n;i+=2)
    cout<<i<<' ';
   }
   return 0;
}