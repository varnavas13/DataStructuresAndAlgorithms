#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,a;
cin>>x;
for(int i=0;i<x;i++)
{
    cin>>a;
    if(a<=37)
    {
    cout<<a<<endl;
}
else if((a%5==3)&&(a>37))
{
cout<<a+2<<endl;
}
else if((a%5==4)&&(a>37))
{
cout<<a+1<<endl;
}
else
    cout<<a<<endl;
}
return 0;
}
