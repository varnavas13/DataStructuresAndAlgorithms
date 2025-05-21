#include <bits/stdc++.h>

using namespace std;


int main()
{
 long long n,a=0,cnt=0;
 string s1;
 cin>>s1>>n;
 for(long long i=0;i<s1.size();i++)
 {
     if(s1[i]=='a')
     a++;
 }
 long long arx,met;
 arx=n/s1.size();
 met=n%s1.size();
 cnt=arx*a;
 for(long long i=0;i<met;i++)
 {
     if(s1[i]=='a')
     cnt++;
 }
 cout<<cnt;
}
