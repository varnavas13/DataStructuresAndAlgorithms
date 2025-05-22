
class Solution {
  public:
    string oddEven(string s) {
       int a[26];
       for(int i=0;i<26;++i)
       a[i]=0;
       for(int i=0;i<s.size();++i)
       {
           a[s[i]-'a']++;
       }
        int ans=0;
        for(int i=0;i<26;++i)
        {
            if(i%2!=a[i]%2&&a[i]>0)
            ++ans;
        }
       
        if(ans%2==0)
        return "EVEN";
        return "ODD";
    }
};