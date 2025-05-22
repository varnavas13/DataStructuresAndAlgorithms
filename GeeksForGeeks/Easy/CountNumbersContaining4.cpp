
class Solution {
  public:
    int countNumberswith4(int n) {
        int cnt=0;
        for(int i=4;i<=n;++i)
        {
            string s=to_string(i);
            for(int k=0;k<s.size();++k)
            {
                if(s[k]=='4')
                {
                    ++cnt;
                    break;
                }
            }
        }
        return cnt;
    }
};