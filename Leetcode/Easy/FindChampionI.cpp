class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
            for(int i=0;i<grid.size();i++)
            {
                int cnt=0;
                for(int k=0;k<grid.size();k++)
                {
                    if(grid[i][k]==1)
                    cnt++;
                }
                if(cnt==grid.size()-1)
                return i;
            }
            return 0;
    }
};