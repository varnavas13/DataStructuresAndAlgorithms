#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
int n;
cin>>n;
long long a[n],b[n],x,y;
for(int i=0;i<n;i++)
{
    cin>>x>>y;
    a[i]=x+y;
    b[i]=i+1;
}
bool sorted;
long long temp1,temp2;
do{
    sorted=true;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]>a[i+1]){
            temp1=a[i];
            a[i]=a[i+1];
            a[i+1]=temp1;
            temp2=b[i];
            b[i]=b[i+1];
            b[i+1]=temp2;
            sorted=false;
        }
    }
}while(sorted==false);
    
    for(int i=0;i<n;i++)
    cout<<b[i]<<' ';
    return 0;
}
