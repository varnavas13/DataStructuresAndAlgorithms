#include <bits/stdc++.h>

using namespace std;

int main(){
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s;
        cin >> s;
        bool poss=false;
        long long int ans=0;
        if(s[0]=='0'){
            string ns="0";
            long long int next=1;
            while(ns.size()<s.size()){
                ns+=to_string(next);
                next++;
            }
            if(ns==s) poss=true;
        }
        else{
            for(int i=1;i<=(s.size()/2);i++){
                ans*=10;
                ans+=(s[i-1]-'0');
                long long int next=ans+1;
                string ns=s.substr(0,i);
                while(ns.size()<s.size()){
                    ns+=to_string(next);
                    next++;
                }
                if(ns==s){
                    poss=true;
                    break;
                }
            }
        }
        if(poss&&s.size()>1) cout<<"YES "<<ans<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
