class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int indx=0;
        for(int i=0;i<s.size();i++)
        {
            if(indx<spaces.size()&&spaces[indx]==i)
            {
                ans+=" ";
                indx++;
            }
            ans+=s[i];
        }
        return ans;
    }
};