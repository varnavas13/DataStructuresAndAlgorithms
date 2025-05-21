#include<string>
#include<iostream>
using namespace std;
int main(){
   int d=1,s=5;
   int n,l,sum=0;
   int p;
   cin>>p;
   for(int i=1;i<=p;i++)
   {
    l=s/2;
    sum+=l;
    s=l*3;       
   }
   cout<<sum;
}
