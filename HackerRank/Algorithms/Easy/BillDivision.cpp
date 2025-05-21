#include<string>
#include<iostream>
using namespace std;
int main(){
    int  n,k;
    cin>>n>>k;
    int a[n],x,sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(i!=k)
        sum+=a[i];
    }
    int d=n-1;
    cin>>x;
    if(sum/2>=x)
    cout<<"Bon Appetit";
    else
    cout<<x-sum/2;
}
