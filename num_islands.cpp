class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {

        int count = 0;
        for(int i =0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    count += 1;
                    dfs(grid,i,j);
                }
            }
        }
        return count;

    }
    void dfs(vector<vector<char>>& vec,int m, int n)
    {
        if(m<0||n<0||m>=vec.size()||n>=vec[0].size()||vec[m][n]!='1')
        {
            return;
        }
        vec[m][n] = '0';
        dfs(vec,m+1,n);
        dfs(vec,m-1,n);
        dfs(vec,m,n+1);
        dfs(vec,m,n-1);
    }
};
