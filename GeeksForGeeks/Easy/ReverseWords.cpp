
class Solution {
  public:
    // Function to reverse words in a given string.
    string reverseWords(string str) {
       string temp="";
       string ans="";
       for(int i=str.size()-1;i>=0;--i)
       {
           if(str[i]=='.')
           {
               reverse(temp.begin(),temp.end());
               ans+=temp;
               ans+='.';
               temp.clear();
           }
           else
           temp+=str[i];
       }
       reverse(temp.begin(),temp.end());
               ans+=temp;
               return ans;
    }
};