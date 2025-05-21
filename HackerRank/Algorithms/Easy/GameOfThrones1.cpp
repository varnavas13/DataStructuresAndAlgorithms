#include <bits/stdc++.h>

using namespace std;


int main()
{
    bool b1=true,b2=true;
    string s1;
    cin>>s1;
    int a[26]={};
    for(int i=0;i<s1.size();i++)
    {
        a[s1[i]-'a']++;
    }
    for(int i=0;i<26;i++)
    {
        
        if(a[i]%2!=0 && b1==false)
        b2=false;
        if(a[i]%2!=0)
        b1=false;
    }
    if(b1==false && s1.size()%2==0)
    cout<<"NO";
    else if(b1==false && b2==false &&s1.size()%2==1)
    cout<<"NO";
    else
    cout<<"YES";
}
