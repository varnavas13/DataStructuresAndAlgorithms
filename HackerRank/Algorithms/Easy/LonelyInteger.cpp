#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    if(n==1)
    {
    cout<<a[0];
    return 0;
    }
    sort(a,a+n);
    if(a[0]!=a[1])
    {
        cout<<a[0];
        return 0;
    }
    if(a[n-1]!=a[n-2])
    {
        cout<<a[n-1];
        return 0;
    }
    for(int i=1;i<n-1;i++)
    if(a[i]!=a[i-1]&&a[i+1]!=a[i])
    cout<<a[i];
    
}
