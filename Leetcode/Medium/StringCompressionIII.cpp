class Solution {
public:
    string compressedString(string word) {
        int cnt=1;
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        char c=word[0];
        string ans="";
        for(int i=1;i<word.size();i++)
        {
            if(word[i]==c&&cnt<9)
            cnt++;
            else
            {
                ans+=('0'+cnt);
                ans+=c;
                c=word[i];
                cnt=1;
            }
        }
                ans+=('0'+cnt);
                ans+=c;
                return ans;
    }
};