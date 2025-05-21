
#include<iostream>
using namespace std;
int main(){
int size,i,sum=0,array[1000];
cin>>size;
for(i=0;i<size;i++)
{
cin>>array[i];
sum=sum+array[i];
}
cout<<sum;
return 0;
}
