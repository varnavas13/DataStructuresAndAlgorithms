class Solution {
public:
    int minimumLength(string s) {
        int cnt[26];
        for(int i=0;i<26;i++)
        cnt[i]=0;
        for(int i=0;i<s.size();i++)
        {
            cnt[s[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
           if(cnt[i]>0)
           {
            if(cnt[i]%2==1)
            ans++;
            else
            ans+=2;
           }
        }
        return ans;
    }
};
