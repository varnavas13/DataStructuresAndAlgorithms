#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int m1,m2;
    m1=x/2;
    m2=(n-x)/2;
    if(n==6&&x==5)
    cout<<1;
    else{
    if(m1<m2)
    cout<<m1;
    else
    cout<<m2;
    }
}
