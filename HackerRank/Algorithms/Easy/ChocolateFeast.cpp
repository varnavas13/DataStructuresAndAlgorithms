#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        long long c,n,m,x=0,sin=0;
        cin>>n>>c>>m;
        x+=n/c;
        sin+=x;
        while(x>=m)
        {
            long long temp;
            temp=x/m;
            x=x%m;
            x+=temp;
            sin+=temp;
        }
        cout<<sin<<endl;
    }
    
}
