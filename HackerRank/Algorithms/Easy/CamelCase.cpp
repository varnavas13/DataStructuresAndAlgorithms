#include <bits/stdc++.h>

using namespace std;

int camelcase(string s) {
    int cnt=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]>='A'&&s[i]<='Z')
    cnt++;
}
return cnt+1;
}

int main()
{

    string s;
    getline(cin, s);

    int result = camelcase(s);

cout<<result;
    return 0;
}
