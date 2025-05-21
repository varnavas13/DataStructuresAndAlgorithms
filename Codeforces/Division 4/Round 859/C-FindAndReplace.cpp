#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>n;
    
    for(ll q=0;q<n;++q)
    {
        ll sz;
        string s1;
        cin>>sz>>s1;
        bool check=true;
        for(char i='a';i<='z';++i)
        {
            bool odd=false,even=false;
            for(ll k=0;k<sz;++k)
            {
                if(s1[k]==i)
                {
                    if(k%2==0)
                    even=true;
                    else
                    odd=true;
                }
            }
            if(odd==true&&even==true)
            check=false;
        } if(check)
    cout<<"YES";
    else
    cout<<"NO";
    cout<<"\n";
    }
   
}