#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int cnt=0,cntmx=0;
    for(int i=0;i<n-1;i++)
    {
        cnt=1;
        for(int k=i+1;k<n;k++)
        {
            if(a[i]==a[k])
            cnt++;
        }
        if(cnt>cntmx)
        cntmx=cnt;
    }
    cout<<n-cntmx;
    
}
