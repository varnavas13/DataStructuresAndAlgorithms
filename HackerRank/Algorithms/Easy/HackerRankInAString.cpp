#include <bits/stdc++.h>

using namespace std;



string hackerrankInString(string s) {
    int ad=0;
    string s2="hackerrank";
    for(int i=0;i<s2.size();i++)
    {
     bool b=false;
     for(int k=ad;k<s.size();k++)
     {
         if(s2[i]==s[k])
         {
         b=true;
         ad=k+1;
         break;
     }   
    }
    if(b==false)
    return "NO";
    

}
return "YES";
}
int main()
{
    int n;
    string s;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        cout<<hackerrankInString(s)<<endl;
    }
}
