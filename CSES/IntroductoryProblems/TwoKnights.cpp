#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
   
   ll x;
   cin>>x;
   for(ll n=1;n<=x;n++)
   {
       cout<<(n - 1)*(n + 4)*(n*n - 3*n + 4)/2<<"\n";
   }
    return 0;
}