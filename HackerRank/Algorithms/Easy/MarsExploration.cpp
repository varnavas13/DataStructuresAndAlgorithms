#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s) {int cnt=0;
for(int i=0;i<s.size();i++)
{
    
    if(i%3==0||i%3==2)
    {
        if(s[i]!='S')
        cnt++;
    }
    else
    {
        if(s[i]!='O')
        cnt++;
    }
}
return cnt;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = marsExploration(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
