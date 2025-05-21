#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    bool b=false;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mn=n+1;
    for(int i=0;i<n;i++)
    {
        for(int k=i+1;k<n;k++)
        {
            if(a[i]==a[k])
            {
                b=true;
                if(k-i<mn)
                mn=k-i;
            }
        }
    }
    if(b)
    cout<<mn;
    else
    cout<<-1;
}

