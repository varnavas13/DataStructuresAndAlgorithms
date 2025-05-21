#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long w,min1=0,max1=0;
vector<long long>x;
for(int i=0;i<5;i++)
{
    cin>>w;
    x.push_back(w);
}
sort(x.begin(),x.end());
for(int a=0;a<4;a++)
{
    min1=min1+x[a];
}
for(int q=4;q>0;q--)
{
    max1=max1+x[q];
}
cout<<min1<<" "<<max1;
return 0;
}
