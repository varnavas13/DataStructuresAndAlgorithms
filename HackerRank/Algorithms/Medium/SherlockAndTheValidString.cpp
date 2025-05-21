#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int a[26]={};
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        a[s[i]-'a']++;
    }
    int x=0;
    int cnt=0;
    sort(a,a+26);
    for(int i=0;i<26;i++)
    {
        if(a[i]>0)
        {
            if(i==0)
            {
                if(a[0]==a[1])
                {
                    x=a[0];
                    break;
                }
            }
                else
                {
                    if(a[i]==a[i-1])
                    {
                        x=a[i];
                        break;
                    }
                }
            
            
        }
    }
    bool b=true;
    for(int i=0;i<26;i++)
    {
        if(a[i]!=0&&a[i]!=x)
        {
            cnt++;
            if(a[i]>0)
            {
            if(abs(a[i]-x)==1||a[i]==1)
            b=false;
            }
        }
    }
    if(cnt==0||cnt==1&&b==false)
    cout<<"YES";
    else
    cout<<"NO";
}
