#include<bits/stdc++.h>
using namespace std;
int main()
{
 int a,s,t,b,counter1=0,counter2=0,m,n;
 cin>>s>>t>>a>>b>>m>>n;
int x[m],y[n];
 for(int i=0;i<m;i++)
 {
     cin>>x[i];
     if(((x[i]+a)>=s)&&((x[i]+a)<=t))
     {
         counter1++;
     }
 }
     for(int j=0;j<n;j++)
     {
         cin>>y[j];
              if(((y[j]+b)>=s)&&((y[j]+b)<=t))
              {
                  counter2++;
              }
     }
     cout<<counter1<<endl;
     cout<<counter2<<endl;
     return 0;

 }
