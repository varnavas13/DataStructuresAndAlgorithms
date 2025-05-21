class Solution {
public:
    int minChanges(string s) {
        int cnt=0;
        char c=s[0];
        int ans=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==c)
            {
                cnt++;
            }
            else
            {
                if(cnt%2==1)
             {   
                ans++;
                cnt=0;
             }
             else
             cnt=1;
                c=s[i];
            }
        }
         if(cnt%2==1)
                ans++;
                return ans;
    }
};