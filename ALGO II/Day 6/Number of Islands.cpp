int r = grid.size();
        int c = grid[0].size();
        if(i < 0 || j < 0 || i >= r || j >= c) return ;
        vis[i][j] = true;
        if(i+1 < r && grid[i+1][j] == '1' && !vis[i+1][j]){
            solve(grid,vis,i+1,j);
        }
        if(i-1 >= 0 && grid[i-1][j] == '1' && !vis[i-1][j]){
            solve(grid,vis,i-1,j);
        }
        if(j+1 < c && grid[i][j+1] == '1' && !vis[i][j+1]){
            solve(grid,vis,i,j+1);
        }
        if(j-1 >= 0 && grid[i][j-1] == '1' && !vis[i][j-1]){
            solve(grid,vis,i,j-1);
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int r = grid.size();
        int c = grid[0].size();
        vector<vector<bool>>vis(r,vector<bool>(c,false));
        int cnt = 0;
        for(int i = 0; i < r; i ++){
            for(int j = 0; j < c; j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    solve(grid,vis,i,j);
                    cnt++;
                }
            }
        }
        return cnt;