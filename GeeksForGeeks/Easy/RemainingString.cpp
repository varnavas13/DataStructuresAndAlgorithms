// User function template for C++
class Solution {
  public:

    string printString(string s, char ch, int count) {
       string ans="";
       int cnt=0;
       for(int i=0;i<s.size();++i)
       {
           if(cnt>=count)
           ans+=s[i];
           if(s[i]==ch)
           ++cnt;
       }
       return ans;
    }
};