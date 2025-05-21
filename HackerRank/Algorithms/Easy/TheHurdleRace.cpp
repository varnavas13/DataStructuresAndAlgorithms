#include<string>
#include<iostream>
using namespace std;
int main(){
    int  n,k;
    cin>>n>>k;
    int a[n],x,mx=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]>mx)
        mx=a[i];
    }
if(k>mx)
cout<<0;
else
cout<<mx-k;
}
