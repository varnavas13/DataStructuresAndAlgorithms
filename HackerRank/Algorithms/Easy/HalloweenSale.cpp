#include <bits/stdc++.h>

using namespace std;
int main(){
    int sum=0,cnt=0,x,m,p,d,s;
    cin>>m>>p>>d>>s;
    while(sum<=s)
    {
        if(m>d)
        {
            sum+=m;
            m-=p;
        }
        else
        sum+=d;
        cnt++;
    }
    cnt--;
    cout<<cnt;
    
}
