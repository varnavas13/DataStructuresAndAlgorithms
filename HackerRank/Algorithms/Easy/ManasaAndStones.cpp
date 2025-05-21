#include <bits/stdc++.h>

using namespace std;
int main(){
     int t;
     cin>>t;
     int a,b,n;
     while(t--)
     {
         int mn;
         cin>>n>>a>>b;
         n--;
         if(a>b)
          mn=b;
         else
          mn=a;
          if(a==b)
          cout<<n*a<<endl;
          else
          {
         for(int i=n;i>=0;i--)
         {
             cout<<i*mn+(n-i)*(a+b-mn)<<' ';
         }
         cout<<endl;
          }
     }
}
