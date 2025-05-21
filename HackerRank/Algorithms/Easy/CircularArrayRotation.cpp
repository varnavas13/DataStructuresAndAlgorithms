#include <bits/stdc++.h>

using namespace std;
int main(){
int n,k,q;
cin>>n>>k>>q;
int a[n],b[n]={};
for(int i=0;i<n;i++)
{
    cin>>a[i];
    b[(i+k)%n]=a[i];
}
for(int i=0;i<q;i++)
{
    int x;
    cin>>x;
    cout<<b[x]<<endl;
}
}
