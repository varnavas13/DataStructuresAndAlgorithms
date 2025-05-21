#include<bits/stdc++.h>
using namespace std;

int number_needed(string a, string b) {
    int i,c[26]={0},c1[26]={};
    for(i=0;i<a.length();i++)
        {
        if(97<=a[i]&&a[i]<=123)
            c[a[i]-97]++;
    }
    for(i=0;i<b.length();i++)
        {
        if(97<=b[i]&&b[i]<=123)
            c1[b[i]-97]++;
    } 
    int s=0;
    for(i=0;i<26;i++)
    {
        s=s+abs(c[i]-c1[i]);
        
    }   
    
    return (s);
    
}

int main(){
    int n;
    cin>>n;
    while(n--)
    {
    string s;
    cin >> s;
    if(s.size()%2==1)
    cout<<-1<<endl;
    else
    {
    string s1,s2;
    s1.clear();
    s2.clear();
    for(int i=0;i<=(s.size()/2)-1;i++)
            s1+=s[i];
            for(int i=s.size()-1;i>(s.size()/2)-1;i--)
            s2+=s[i];
    cout << number_needed(s1, s2)/2 << endl;

}}    
    return 0;
}
