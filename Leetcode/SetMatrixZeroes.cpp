class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     int rows=matrix.size();
     int col=matrix[0].size();
     for(int i=0;i<matrix.size();i++)
     {
        for(int k=0;k<matrix[0].size();k++)
        {
            if(matrix[i][k]==0)
            {
                for(int j=0;j<matrix[0].size();j++)
               { 
                if(matrix[i][j]!=0)
               matrix[i][j]=INT_MIN+69;
               }
                for(int j=0;j<rows;j++)
                if(matrix[j][k]!=0)
                matrix[j][k]=INT_MIN+69;
            }
        }
     }   
     for(int i=0;i<rows;i++)
        for(int k=0;k<col;k++)
        if(matrix[i][k]==INT_MIN+69)
        matrix[i][k]=0;
    }
};
