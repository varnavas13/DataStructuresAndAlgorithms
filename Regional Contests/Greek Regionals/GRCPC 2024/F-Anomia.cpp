#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll n,m,d;
    cin>>n>>m>>d;
    char arr[n][m];
    ll stx,sty,endx,endy;
    for(ll i=0;i<n;i++)
    {
        for(ll k=0;k<m;k++)
        {
            cin>>arr[i][k];
            if(arr[i][k]=='F')
            {
                stx=i;
                sty=k;
            }
            else if(arr[i][k]=='H')
            {
                endx=i;
                endy=k;
            }
        }
    }
        for(ll i=0;i<n;i++)
    {
        for(ll k=0;k<m;k++)
        {
            if(arr[i][k]=='^')
            {
                ll x=i-1;
                while(x>=0&&i-x<=d&&(arr[x][k]=='.'||arr[x][k]=='!'||arr[x][k]=='F'||arr[x][k]=='H'))
                {
                    if(arr[x][k]=='F'||arr[x][k]=='H')
                    {
                        cout<<"NO";
                        return 0;
                    }
                    arr[x][k]='!';x--;}
            }
           else if(arr[i][k]=='v')
            {
                ll x=i+1;
                while(x<n&&x-i<=d&&(arr[x][k]=='.'||arr[x][k]=='!'||arr[x][k]=='F'||arr[x][k]=='H'))
                {
                     if(arr[x][k]=='F'||arr[x][k]=='H')
                    {
                        cout<<"NO";
                        return 0;
                    }
                    arr[x][k]='!';x++;}
            }
            else if(arr[i][k]=='>')
            {
                ll x=k+1;
                while(x<m&&x-k<=d&&(arr[i][x]=='.'||arr[i][x]=='!'||arr[i][x]=='F'||arr[i][x]=='H'))
                {
                     if(arr[i][x]=='F'||arr[i][x]=='H')
                    {
                        cout<<"NO";
                        return 0;
                    }
                    arr[i][x]='!';x++;}
            }
            else if(arr[i][k]=='<')
            {
                ll x=k-1;
                while(x>=0&&k-x<=d&&(arr[i][x]=='.'||arr[i][x]=='!'||arr[i][x]=='F'||arr[i][x]=='H'))
                {
                     if(arr[i][x]=='F'||arr[i][x]=='H')
                    {
                        cout<<"NO";
                        return 0;
                    }
                    arr[i][x]='!';x--;}
            }
        }
    }
    queue<pair<ll,ll>> q;
    q.push(make_pair(stx,sty));
    while(!q.empty())
    {
        pair<ll,ll> temp=q.front();
        q.pop();
        ll x=temp.first;
        ll y=temp.second;
        if(x-1>=0)
        {
            if(arr[x-1][y]=='H')
            {
                cout<<"YES";
                return 0;
            }
            if(arr[x-1][y]=='.')
            {
                q.push(make_pair(x-1,y));
                arr[x-1][y]='F';
            }
        }
        if(y-1>=0)
        {
             if(arr[x][y-1]=='H')
            {
                cout<<"YES";
                return 0;
            }
            if(arr[x][y-1]=='.')
            {
                q.push(make_pair(x,y-1));
                arr[x][y-1]='F';
            }
        }
         if(x+1<n)
        {
            if(arr[x+1][y]=='H')
            {
                cout<<"YES";
                return 0;
            }
            if(arr[x+1][y]=='.')
            {
                q.push(make_pair(x+1,y));
                arr[x+1][y]='F';
            }
        }
         if(y+1<m)
        {
             if(arr[x][y+1]=='H')
            {
                cout<<"YES";
                return 0;
            }
            if(arr[x][y+1]=='.')
            {
                q.push(make_pair(x,y+1));
                arr[x][y+1]='F';
            }
        }
        
        
    }
    cout<<"NO";
   
    return 0;
}