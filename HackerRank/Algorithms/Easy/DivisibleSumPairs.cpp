#include<string>
#include<iostream>
using namespace std;
int main(){
  int k,n;
  int cnt=0;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  for(int i=0;i<n;i++)
{
    for(int j=i+1;j<n;j++)
    {
        if((a[i]+a[j])%k==0)
        cnt++;
    }
}
cout<<cnt;
return 0;
}
