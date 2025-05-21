class Solution {
    public int uniquePathsWithObstacles(int[][] obstacleGrid) {
        int ans[][]=new int[obstacleGrid.length][obstacleGrid[0].length];
        if(obstacleGrid[0][0]==0)
        ans[0][0]=1;
        else
        ans[0][0]=0;
        for(int i=1;i<obstacleGrid[0].length;i++)
        {
            if(obstacleGrid[0][i-1]==0&&obstacleGrid[0][i]==0)
            {
                ans[0][i]=1;
            }
            else
            {
                ans[0][i]=0;
                break;
            }
        }
        for(int i=1;i<obstacleGrid.length;i++)
        {
         if(obstacleGrid[i][0]==0&&obstacleGrid[i-1][0]==0)
            {
                ans[i][0]=1;
            }
            else
            {
                ans[i][0]=0;
                break;
            }   
        }
        for(int i=1;i<obstacleGrid.length;i++)
        {
            for(int k=1;k<obstacleGrid[0].length;k++)
            {
                ans[i][k]=ans[i][k-1]+ans[i-1][k];
                if(obstacleGrid[i][k]==1)
                ans[i][k]=0;
            }
        }
        return ans[obstacleGrid.length-1][obstacleGrid[0].length-1];
    }
}
