#include <bits/stdc++.h>

using namespace std;
int main(){
    int n,p;
    cin>>n>>p;
    int a[n],cnt=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(a[k]-a[i]==p)
            {
            for(int j=k+1;j<n;j++)
            {
                if(a[j]-a[k]==p)
                cnt++;
            }
            }
        }
    }
    cout<<cnt;
}
