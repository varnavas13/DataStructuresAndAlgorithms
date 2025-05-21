class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int> go,back;
        for(int i=0;i<paths.size();i++)
        {
            go[paths[i][0]]++;
            back[paths[i][1]]++;
        }
           for(int i=0;i<paths.size();i++)
           {
            if(back[paths[i][1]]==1&&go[paths[i][1]]==0)
            return paths[i][1];
           }
           return "";
    }
};