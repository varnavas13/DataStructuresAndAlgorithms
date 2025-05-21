#include <bits/stdc++.h>

using namespace std;
int main()
{
    string x;
    cin>>x;
    int n=x.size();
    float n2=sqrt(n);
    int n3=sqrt(n);
    if(n2-n3>0)
    n3++;
    for(int i=0;i<n3;i++)
    {
        for(int k=i;k<n;k+=n3)
        cout<<x[k];
        cout<<' ';
    }
        
}
