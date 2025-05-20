#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N;
void printNum(ll n)
{
    
    ll temp=n;
    string tempstring;
    tempstring.clear();
    while(temp>0)
    {
        if(temp%2==1)
        tempstring+='1';
        else
        tempstring+='0';
        temp/=2;
    }
    reverse(tempstring.begin(),tempstring.end());
    ll sz=tempstring.size();
    for(ll i=0;i<N-sz;i++)
    {
        tempstring='0'+tempstring;
    }
    cout<<tempstring<<"\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n;
    cin>>N;
    for(ll i=0;i<(1<<N);i++)
    {
        printNum(i^(i>>1));
    }
}