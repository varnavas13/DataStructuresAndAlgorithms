

class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        for(int i=0;i<mat.size();i++)
        {
            for(int k=0;k<mat[i].size();k++)
            if(mat[i][k]==x)
            return true;
        }
        return false;
    }
};