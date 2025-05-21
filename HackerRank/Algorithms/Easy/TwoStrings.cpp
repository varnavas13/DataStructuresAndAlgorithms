#include <bits/stdc++.h>

using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        bool j=false;
        int a[26]={},b[26]={};
        string s1,s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.size();i++)
        a[s1[i]-'a']++;
        for(int k=0;k<s2.size();k++)
        b[s2[k]-'a']++;
        for(int i=0;i<26;i++)
        {
            if(a[i]>0&&b[i]>0)
            {
                j=true;
                i=64;
            }
        }
        if(j)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}
