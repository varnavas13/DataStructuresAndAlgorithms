class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
     vector<int>ans;
     for(int i=0;i<code.size();i++)
     {
        int sm=0;
        if(k>=0)
        for(int j=1;j<=k;j++)
        {
            sm+=code[(i+j)%code.size()];
        }
        else
        {
            for(int j=-1;j>=k;j--)
            {
                sm+=code[(i+j+code.size())%code.size()];
            }
        }
        ans.push_back(sm);
     }   
     return ans;
    }
};