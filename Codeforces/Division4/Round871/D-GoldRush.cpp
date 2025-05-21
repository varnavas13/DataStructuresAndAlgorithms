#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m;
        cin>>n>>m;
        if(m>n)
        cout<<"NO";
        else if(n==m)
        cout<<"YES";
        else if(n!=m&&n%3!=0)
        cout<<"NO";
        else
        {
            bool found=false;
            bool telos=false;
            vector<ll>v1;
            ll temp=n/3;
            v1.push_back(temp);
            v1.push_back(2*temp);
            while(!telos)
            {
                telos=true;
                for(ll i=0;i<v1.size();++i)
                {
                    if(v1[i]==m)
                    {
                        telos=true;
                        found=true;
                        break;
                    }
                    if(v1[i]%3==0)
                    {
                        telos=false;
                        ll x=v1[i]/3;
                        v1[i]=x;
                        v1.push_back(2*x);
                    }
                }
            }
            if(found)
            cout<<"YES";
            else
            cout<<"NO";
        }
        
        cout<<"\n";
    }
}