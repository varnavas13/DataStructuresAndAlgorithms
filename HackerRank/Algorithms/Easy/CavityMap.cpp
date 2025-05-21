#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
   ll n;
   cin>>n;
   char A[n][n];
   char a;
   for (ll i=0;i<n;i++)
   {
       for (ll j=0;j<n;j++)
       {
           cin>>a;
           A[i][j]=a;
       }
   }
   char B[n][n];
    for (ll i=0;i<n;i++)
   {
       for (ll j=0;j<n;j++)
       {
           if (i==0||j==0||i==n-1||j==n-1)
           {
               B[i][j]=A[i][j];
           }
           else
           {
               if (A[i][j]>A[i-1][j]&&A[i][j]>A[i+1][j]&&A[i][j]>A[i][j+1]&&A[i][j]>A[i][j-1])
               {
                   B[i][j]='X';


                   }
                   else
                   {
                       B[i][j]=A[i][j];
                   }
           }
       }
   }
    for (ll i=0;i<n;i++)
   {
       for (ll j=0;j<n;j++)
       {
           cout<<B[i][j];
       }
       cout<<endl;
   }

return 0;
}
