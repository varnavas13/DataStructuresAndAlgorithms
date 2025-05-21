#include<iostream>
using namespace std;
int main(){
int size;
long long array[10],sum=0;
cin>>size;
for(int i=0;i<size;i++)
{
    cin>>array[i];
    sum=sum+array[i];
}
cout<<sum;
return 0;
}
