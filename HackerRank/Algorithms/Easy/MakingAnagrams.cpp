#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int n1=s1.size(),n2=s2.size();
    int a1[26]={},a2[26]={};
    for(int i=0;i<n1;i++)
    a1[s1[i]-'a']++;
    for(int i=0;i<n2;i++)
    a2[s2[i]-'a']++;
    int sum=n1+n2;
    int x=0;
    for(int i=0;i<26;i++)
    {
        x+=min(a1[i],a2[i])*2;
    }
    cout<<sum-x;
    
    
    
    
    
    
    
}

