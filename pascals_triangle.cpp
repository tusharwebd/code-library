class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> mat;
        if(numRows==0)
            return mat;
        vector<int> row1 = {1};
        mat.push_back(row1);
        if(numRows==1)
            return mat;
        vector<int> row2 = {1,1};
        mat.push_back(row2);
        for(int i = 2;i<numRows;i++)
        {
            vector<int> row(i+1,0);
            row[0] = 1;
            row[row.size()-1] = 1;
            for(int j = 1;j<row.size()-1;j++)
            {
                row[j] = mat[i-1][j-1] + mat[i-1][j];
            }
            mat.push_back(row);
        }
        return mat;
    }
};
