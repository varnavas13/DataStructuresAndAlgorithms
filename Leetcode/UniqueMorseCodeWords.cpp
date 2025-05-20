class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        string temp[]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
           unordered_set<string> ans;
            for(int i=0;i<words.size();++i)
            {
                string tempword="";
                for(int k=0;k<words[i].size();++k)
                {
                    int index=words[i][k]-'a';
                    tempword+=temp[index];
                }
                ans.insert(tempword);
            }
            return ans.size();
    }
};
