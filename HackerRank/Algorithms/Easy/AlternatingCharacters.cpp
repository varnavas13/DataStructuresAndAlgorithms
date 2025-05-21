#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int cnt=0;
        string s;
        cin>>s;
        for(int i=0;i<s.size()-1;i++)
        if(s[i]==s[i+1])
        cnt++;
        cout<<cnt<<endl;
    }
}
