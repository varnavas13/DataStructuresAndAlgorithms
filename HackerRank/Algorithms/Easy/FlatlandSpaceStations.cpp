#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,m,tempmx;
    cin>>n>>m;
    int a[m]={},mx=-2;
    for(int i=0;i<m;i++)
    { 
    cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        tempmx=1000000;
        bool b=false;
        for(int k=0;k<m;k++)
        {
            if(abs(a[k]-i)>mx&&abs(a[k]-i)<tempmx)
            {
            tempmx=abs(a[k]-i);
        }
    if(abs(a[k]-i)<=mx)
            {
            b=true;
        }
        }
        if(b)
        {}
        else
        mx=tempmx;
    }
    cout<<mx;
}
