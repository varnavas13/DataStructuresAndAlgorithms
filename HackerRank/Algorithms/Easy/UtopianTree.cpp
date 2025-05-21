#include<string>
#include<iostream>
using namespace std;
int main(){
   int n,t,s;
   cin>>n;
   for(int i=0;i<n;i++)
   {
       s=0;
       cin>>t;
       for(int k=0;k<=t;k++)
       {
           if(k%2==0)
           s++;
           else
           s*=2;
       }
       cout<<s<<endl;
   }
}
