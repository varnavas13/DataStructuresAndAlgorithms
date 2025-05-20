class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        map<int,int>mp;
        int num;
        int sm=0;
        for(int i=0;i<grid.size();++i)
        {
            for(int k=0;k<grid.size();++k)
            {
                sm+=grid[i][k];
                mp[grid[i][k]]++;
                if(mp[grid[i][k]]==2)
                num=grid[i][k];
            }
        }
        vector<int> ans;
        ans.push_back(num);
        int n=grid.size();
        n*=n;
        int totalsum=(n+1)*n/2;
        sm-=num;
        ans.push_back(totalsum-sm);
        return ans;
    }
};
