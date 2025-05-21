#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,cnt=0;
        cin>>n>>k;
        for(int i=0;i<n;i++)
        {
            int m;
            cin>>m;
            if(m<=0)
            cnt++;
        }
        if(cnt<k)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        
    }
}
