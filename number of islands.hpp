    void dfs(vector<vector<char>>& grid,int i,int j,int m,int n)
    {
        if (i < 0 || i == m || j < 0 || j == n || grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        dfs(grid, i - 1, j,m,n);
        dfs(grid, i + 1, j,m,n);
        dfs(grid, i, j - 1,m,n);
        dfs(grid, i, j + 1,m,n);
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        std::ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        
        
        
        int ans = 0;
        int r = grid.size();
        if(r==0)
            return 0;
        int c = grid[0].size();
        
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]=='1')
                {
                    ans++;
                    dfs(grid,i,j,r,c);
                }
                // cout<<grid[i][j];
            }
        }
        return ans;
    }
