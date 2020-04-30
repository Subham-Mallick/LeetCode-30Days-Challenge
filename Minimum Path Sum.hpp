int minPathSum(vector<vector<int>>& grid) {
        
  std::ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);


  int r = grid.size();
  int c = grid[0].size();

  for(int i=0;i<r-1;i++)
      grid[i+1][0] = grid[i][0]+grid[i+1][0];

  for(int i=0;i<c-1;i++)
      grid[0][i+1] = grid[0][i] + grid[0][i+1];

  for(int i=1;i<r;i++)
      for(int j=1;j<c;j++)
          grid[i][j] = grid[i][j] + min(grid[i-1][j],grid[i][j-1]);

  return grid[r-1][c-1];
}
