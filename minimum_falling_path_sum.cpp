class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        for(int i = 1;i<matrix.size();i++)
        {
            for(int j = 0;j<matrix[0].size();j++)
            {
                if(j==0)
                    matrix[i][j] += min(matrix[i-1][j],matrix[i-1][j+1]);
                else if(j==matrix[0].size()-1)
                    matrix[i][j] += min(matrix[i-1][j-1],matrix[i-1][j]);
                else
                    matrix[i][j] += min(matrix[i-1][j],min(matrix[i-1][j-1],matrix[i-1][j+1]));
            }

        }
        int i = matrix.size() - 1;
        int mi = INT_MAX;
        for(int j = 0;j<matrix[0].size();j++)
        {
            mi = min(mi,matrix[i][j]);
        }
        return mi;
    }
};
