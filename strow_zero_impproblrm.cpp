class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
       if (matrix.empty() || matrix[0].empty()) return;

       int rows = matrix.size();
       int col = matrix[0].size();
       bool firstrowzero = false,firstcolzero = false;
       for(int i=0;i<rows;i++)
       {
        for(int j=0;j<col;j++)
        {
            if(matrix[i][j] == 0)
            {
                if(i == 0) firstrowzero = true;
                if(j == 0) firstcolzero = true;
                matrix[0][j] = 0;
                matrix[i][0] = 0;
            }
        }

       }

       for(int i = 1;i<rows;i++)
       {
        for(int j=1;j<col;j++)
        {
            if(matrix[0][j]==0 || matrix[i][0] == 0)
            {
                matrix[i][j] = 0;
            }
        }
       }
       
       if(firstrowzero)
       {
        for(int j=0;j<col;j++)
        {
            matrix[0][j] = 0;
        }
       }

       if(firstcolzero)
       {
        for(int i=0;i<rows;i++)
        {
            matrix[i][0] = 0;
        }
       }
        
    }
};