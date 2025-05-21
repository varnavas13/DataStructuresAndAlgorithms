#include <bits/stdc++.h>

using namespace std;

string pangrams(string s) {bool b=false;
    for(int i=0;i<s.size();i++)
    if(s[i]>='A'&&s[i]<='Z')
    s[i]+=32;
    for(char i='a';i<='z';i++)
    {
        b=false;
        for(int k=0;k<s.size();k++)
        {
            if(s[k]==i)
            {
            b=true;
        }
        }
        if(b==false)
      return "not pangram";
    }
return "pangram";
}

int main()
{

    string s;
    getline(cin, s);

    string result = pangrams(s);

  cout<<result;

    return 0;
}
