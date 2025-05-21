#include <iostream>
#include <vector>

using namespace std;

int dfs(vector<vector<int>>& grid, vector<vector<bool>>& visited, int i, int j) {
    visited[i][j] = true;
    int volume = grid[i][j];
    if (i > 0 && !visited[i-1][j] && grid[i-1][j] > 0) {
        volume += dfs(grid, visited, i-1, j);
    }
    if (i < grid.size()-1 && !visited[i+1][j] && grid[i+1][j] > 0) {
        volume += dfs(grid, visited, i+1, j);
    }
    if (j > 0 && !visited[i][j-1] && grid[i][j-1] > 0) {
        volume += dfs(grid, visited, i, j-1);
    }
    if (j < grid[0].size()-1 && !visited[i][j+1] && grid[i][j+1] > 0) {
        volume += dfs(grid, visited, i, j+1);
    }
    return volume;
}

int largestLake(vector<vector<int>>& grid) {
    int largestVolume = 0;
    int n = grid.size();
    int m = grid[0].size();
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] > 0 && !visited[i][j]) {
                int volume = dfs(grid, visited, i, j);
                largestVolume = max(largestVolume, volume);
            }
        }
    }
    return largestVolume;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<vector<int>> grid;
    for(int i=0;i<x;++i)
    {
        vector<int>temp;
        for(int k=0;k<y;++k)
        {
            int j;
            cin>>j;
           temp.push_back(j);
        }
        grid.push_back(temp);
    }
    
    int largestVolume = largestLake(grid);
    cout <<  largestVolume << endl;
    }
    return 0;
}
