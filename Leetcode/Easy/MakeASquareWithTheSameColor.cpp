class Solution {
public:
    bool canMakeSquare(vector<vector<char>>& grid) {
        int n=grid.size(), m=grid[0].size();
        
        vector<vector<int>> preSum(n,vector<int>(m,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                preSum[i][j] = (grid[i][j] == 'W' ? 0:1);
                
                if(i>0) preSum[i][j] += preSum[i-1][j];
                if(j>0) preSum[i][j] += preSum[i][j-1];
                if(i>0 && j>0) preSum[i][j] -= preSum[i-1][j-1];
            }
        }
        
            int k=2;        
        for(int i=0;i<n-(k-1);i++){
            for(int j=0;j<m-(k-1);j++){
                int r1=i, c1=j, r2=i+1, c2=j+1;
                
                int sum = preSum[r2][c2];
                if(r1>0) sum -= preSum[r1-1][c2];
                if(c1>0) sum -= preSum[r2][c1-1];
                if(r1>0 && c1>0) sum += preSum[r1-1][c1-1];
                
                if(sum == 1 || sum == 3 || sum == 0 || sum == 4) return true;
            }
        }
        
        return false;
    }
};