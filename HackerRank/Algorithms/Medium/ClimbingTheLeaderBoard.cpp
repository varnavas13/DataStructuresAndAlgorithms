#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    b[0]=1;
    int temp=1;
    for(int i=0;i<n;i++)
    {
    cin>>a[i];
    if(i>0)
    {
        if(a[i]==a[i-1])
        b[i]=b[i-1];
        else {
        ++temp;
        b[i]=temp;
        }
    }
    }
    int n2;
    cin>>n2;
    int sm=0;
    int pnt=n-1;
    while(n2--)
    {
        bool bo=false;
        cin>>sm;
        for(int i=pnt;i>=0;i--)
        {
            if(a[i]>sm)
            {
                bo=true;
                cout<<b[i]+1<<"\n";
                pnt=i;
                break;
            }
        }
        if(bo==false)
        cout<<1<<"\n";
    }
}
