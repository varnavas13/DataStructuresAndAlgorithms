#include <bits/stdc++.h>

using namespace std;

int main(){
    long long x,y;
    bool b=true;
    cin>>x>>y;
    for(long long i=x;i<=y;i++)
    {
        long long cnt=0,temp;
        long long k=pow(i,2);
        temp=i;
        while(temp>0)
        {
            temp/=10;
            cnt++;
        }
        long long th=pow(10,cnt);
        if(i==k/th+k%th)
        {
        cout<<i<<' ';
        b=false;
        }
    }
    if(b)
    cout<<"INVALID RANGE";
}
