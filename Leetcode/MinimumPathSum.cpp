class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
     int n=grid.size();
     int m=grid[0].size();
     int arr[n+1][m+1];
     for(int i=0;i<=n;i++)
     arr[i][0]=0;
     for(int i=0;i<=m;i++)
     arr[0][i]=0;
     for(int i=1;i<=n;i++)
     {
        for(int k=1;k<=m;k++)
        arr[i][k]=max(arr[i-1][k],arr[i][k-1])+grid[i-1][k-1];
     }
    for(int i=0;i<=n;i++)
    {
        for(int k=0;k<=m;k++)
        cout<<arr[i][k]<<" ";
        cout<<endl;
    }
     return arr[n][m];   
    }
};
