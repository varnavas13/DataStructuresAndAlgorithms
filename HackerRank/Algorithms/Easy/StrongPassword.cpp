#include <bits/stdc++.h>

using namespace std;

int main(){
    
int n;
cin>>n;
string s;
int cntA=0,cnta=0,cntn=0,cntl=0;
cin>>s;
for(int i=0;i<n;i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    cntA++;
    else if(s[i]>='a'&&s[i]<='z')
    cnta++;
    else if(s[i]>='0'&&s[i]<='9')
    cntn++;
    else
    cntl++;
}
int th=0;
if(cntA==0)
th++;
if(cnta==0)
th++;
if(cntn==0)
th++;
if(cntl==0)
th++;
if(n+th<6)
th=6-n;
cout<<th;
}
