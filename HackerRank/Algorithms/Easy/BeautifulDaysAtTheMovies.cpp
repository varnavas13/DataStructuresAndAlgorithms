#include <bits/stdc++.h>

using namespace std;
int main(){
    long long cnt=0,n1,n2,x;
    cin>>n1>>n2>>x;
    for(long long i=n1;i<=n2;i++)
    {
        long long temp,remainder,reversed_number=0;
        temp=i;
        while(temp != 0) {
    remainder = temp % 10;
    reversed_number = reversed_number * 10 + remainder;
    temp /= 10;
  }
  if(abs(i-reversed_number)%x==0)
  {
  cnt++;
     } }
    cout<<cnt;
}
