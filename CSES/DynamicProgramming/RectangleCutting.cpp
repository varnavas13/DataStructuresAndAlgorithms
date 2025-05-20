#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll a,b;
    cin>>a>>b;
    ll opt[a+1][b+1];
    
    for(ll i=0;i<=a;i++)
    {
        for(ll j=0;j<=b;j++)
        {
            opt[i][j]=INT_MAX;
            if(i==j)
            opt[i][j]=0;
            else
            {
                for(int k=1;k<j;k++)
                {
                    opt[i][j]=min(opt[i][j],opt[i][k]+opt[i][j-k]+1);
                }
                for(int k=1;k<i;k++)
                {
                    opt[i][j]=min(opt[i][j],opt[k][j]+opt[i-k][j]+1);
                }
            }
        }
    }
    cout<<opt[a][b];
    return 0;
}