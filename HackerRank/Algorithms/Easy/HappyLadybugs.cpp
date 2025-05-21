#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        bool b=false;
        int n;
        string s;
        cin>>n>>s;
        int cnt=0;
        int a[26]={};
        for(int i=0;i<n;i++)
    {
        if(s[i]=='_')
        cnt++;
        if(s[i]>='A'&&s[i]<='Z')
        a[s[i]-'A']++;
        if(i>=1&&i<n-1)
        {
            if(s[i]!=s[i-1]&&s[i]!=s[i+1])
            b=true;
        }
    }
        bool b2=false;
        for(int i=0;i<26;i++)
        if(a[i]==1)
        b2=true;
        if((b==true && cnt==0)||b2==true)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    
    
    }
}
