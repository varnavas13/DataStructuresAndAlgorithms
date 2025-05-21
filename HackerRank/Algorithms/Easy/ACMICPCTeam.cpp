#include <bits/stdc++.h>

using namespace std;
int main(){
     int t,mx=0,cnt=0,n,cnt2;
     cin>>t>>n;
     string a[t];
     for(int i=0;i<t;i++)
     cin>>a[i];     
     for(int i=0;i<t;i++)
     {
         for(int k=i+1;k<t;k++)
         {                 cnt2=0;

             for(int j=0;j<n;j++)
             {
                 if(a[i][j]=='1'||a[k][j]=='1')
                 {
                     cnt2++;
                 }
             }
             if(cnt2>mx)
             {
             mx=cnt2;
             cnt=0;
        }
             if(cnt2==mx)
             {
                 cnt++;
             }
         }
     }
     cout<<mx<<endl;
     cout<<cnt;
}
