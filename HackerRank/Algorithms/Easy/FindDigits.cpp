#include<string>
#include<iostream>
using namespace std;
int main(){
  int n;
  int x;
  cin>>n;
  for(int i=0;i<n;i++)
  {
      cin>>x;
      int cnt=0;
      int temp=x;
      int m;
      while(temp>0)
      {
          m=temp%10;
          if(m!=0){
        
          if(x%m==0)
          cnt++;
      }
          temp/=10;
      }
      cout<<cnt<<endl;
  }
return 0;
}
