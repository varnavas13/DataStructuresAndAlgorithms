#include <bits/stdc++.h>

using namespace std;


int main()
{
 int n,x=0;
 cin>>n;
 int a[n];
 int cnt=0;
 for(int i=0;i<n;i++)
 cin>>a[i];
 while(x<n-1)
 {
     if(a[x+2]==0)
     x+=2;
     else
     x++;
     cnt++;
 }
 cout<<cnt;
}
