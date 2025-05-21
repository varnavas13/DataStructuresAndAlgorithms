#include <bits/stdc++.h>

using namespace std;

int main(){
  long long t;
  cin>>t;
  long long x=3;
  while(t--)
  {
      while(t>=x)
      {
          t-=x;
          x*=2;
      }
      cout<<x-t;
      return 0;
}
}


