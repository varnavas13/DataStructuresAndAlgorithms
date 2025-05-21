#include <bits/stdc++.h>

using namespace std;
int main()
{
       int k,n,cnt=0;
n=1;
int s;
    cin>>s;
    while(s--)
    {
        string n;
        cin>>n;
        cnt=0;
        for(int i=0;i<n.size()/2;i++)
        {
            cnt+=abs(n[i]-n[n.size()-1-i]);
        }
        cout<<cnt<<endl;
}
return 0;
}
