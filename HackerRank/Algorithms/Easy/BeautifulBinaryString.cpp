#include <bits/stdc++.h>

using namespace std;
int main(){
int n,cnt=0;
string s;
cin>>n>>s;
for(int i=0;i<n-2;i++)
{
    if(s[i]=='0'&&s[i+1]=='1'&&s[i+2]=='0')
    {
    cnt++;
    s[i+2]='1';
    }
}
cout<<cnt;
}
