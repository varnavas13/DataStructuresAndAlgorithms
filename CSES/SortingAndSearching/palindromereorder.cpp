#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    ll arr[26];
    for(ll i=0;i<26;i++)
    arr[i]=0;
    cin>>s;
    for(ll i=0;i<s.size();i++)
    {
        arr[s[i]-'A']++;
    }
    int cntper=0;
    char x;
    for(ll i=0;i<26;i++)
    {
        if(arr[i]%2==1)
        {
            cntper++;
            x=('A'+i);
        }
    }
    if(cntper>1)
    cout<<"NO SOLUTION";
    else
    {
        string s1;
        s1.clear();
        for(ll i=0;i<26;i++)
        {
            for(ll k=0;k<arr[i]/2;k++)
            s1+=('A'+i);
        }
        string ans;
        string s2=s1;
        reverse(s1.begin(),s1.end());
        if(cntper==1)
        ans=s2+x+s1;
        else
        ans=s2+s1;
        cout<<ans;
    }

    return 0;
}