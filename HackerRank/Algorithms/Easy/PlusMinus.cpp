#include<iostream>
#include<iomanip>
using namespace std;
int main(){
int i,x,count1=0,count2=0,count3=0;
float p1,p2,p3;
cin>>x;
int g[x];
for(i=0;i<x;i++)
{
cin>>g[i];
if(g[i]>0)
{
    count1++;
}
else if (g[i]<0)
{
    count2++;
}
else{
count3++;
}
}
p1=(float)count1/x;
p2=(float)count2/x;
p3=(float)count3/x;
cout<<fixed<<setprecision(6)<<p1<<endl;
cout<<fixed<<setprecision(6)<<p2<<endl;
cout<<fixed<<setprecision(6)<<p3<<endl;
return 0;
}
