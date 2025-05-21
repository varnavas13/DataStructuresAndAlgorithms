#include <bits/stdc++.h>

using namespace std;
int main()
{
    bool bo=false;
    int cnt=0;
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
        for(int k =0;k<n;k++)
        {
            if(a[k]==b[i])
            {
                cnt++;
                a[k]=-2;
                break;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
    {
        bo=true;
        break;
    }
}
    if(bo)
    cout<<cnt+1;
    else
    cout<<cnt-1;
    
}
