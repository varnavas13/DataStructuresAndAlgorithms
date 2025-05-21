#include<string>
#include<iostream>
using namespace std;
int main(){
    string s1;
    int a[26];
    for(int i=0;i<26;i++)
    cin>>a[i];
    cin>>s1;
    int mx=0;
    for(int i=0;i<s1.size();i++)
    {
        if(a[s1[i]-'a']>mx)
        mx=a[s1[i]-'a'];
    }
    cout<<mx*s1.size();
}
