class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
      vector<string>ans;
      unordered_set<string> s;
      for(int i=0;i<words.size();i++)
      {
        for(int k=0;k<words.size();k++)
        {
            if(k!=i&&words[i].size()<=words[k].size())
            {
               for(int xx=0;xx<=words[k].size()-words[i].size();xx++)
               {
                int cnt=0;
                for(int mm=0;mm<words[i].size();mm++)
                {
                    if(words[i][mm]==words[k][mm+xx])
                    cnt++;
                }
                if(cnt==words[i].size())
                {
                    int temp=s.size();
                    s.insert(words[i]);
                    if(s.size()==temp+1){
                    ans.push_back(words[i]);
                    break;
                    }
                }
               }     
            }
        }
      }
      return ans;
    }
};
