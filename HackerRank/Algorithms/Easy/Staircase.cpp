#include<bits/stdc++.h>
using namespace std;
int main()
{
int x;
cin>>x;
for(int w =1;w<=x;w++)
{
    for(int j=x-w;j>0;j--)
    cout<<" ";
    for(int a=1;a<=w;a++)
    {
        cout<<"#";
    }
    cout<<endl;
    }
return 0;
}
