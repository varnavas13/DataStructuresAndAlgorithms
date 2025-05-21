#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int en=100;
    int i=0;
    while((i+k)%n!=0)
    { 
        if(a[(i+k)%n]==1)
        en-=2;
        i=(i+k)%n;
       
        en--;
    }
    if(a[0]==1)
    en-=3;
    else
    en--;
    cout<<en;
}
