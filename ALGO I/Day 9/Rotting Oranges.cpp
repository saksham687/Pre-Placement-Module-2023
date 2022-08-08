class Solution {
    int m, n;
    const int INF = 1e9 + 10;
    
    vector <pair <int, int> > movements = {
	    {0, 1}, {0, -1}, {1, 0}, {-1, 0},
    };
    
public:
    
    bool isValid(int i , int j) {
	return i >= 0 && j >= 0 && i < m && j < n;
}

    
int bfs(vector<vector<int>>& grid) {
    vector <vector<int> > vis(m, vector<int>(n, 0));
    vector <vector<int> > lev(m, vector<int>(n, INF));
	int mx = 2;

	queue <pair <int, int> > q;
	for(int i = 0; i<m; ++i) {
		for(int j = 0; j<n; ++j) {
			if(grid[i][j] == mx){
				q.push({i, j});
				lev[i][j] = 0;
				vis[i][j] = 2;
			}
		}
	}

	int ans = 0;

	while(!q.empty()) {
		auto v = q.front();
		int v_x = v.first;
		int v_y = v.second;
		q.pop();
		for( auto movement : movements) {
			int child_x = movement.first + v_x;
			int child_y = movement.second + v_y;
			if(!isValid(child_x, child_y))
				continue;
			if(vis[child_x][child_y] == 2|| grid[child_x][child_y] == 0)
				continue;
			q.push({child_x , child_y});
			lev[child_x][child_y] = lev[v_x][v_y] + 1;
			vis[child_x][child_y] = 2;
			ans = max(ans, lev[child_x][child_y]);
		}
	}
    
    for(int i = 0; i<m; ++i) {
		for(int j = 0; j<n; ++j) {
			if(vis[i][j] == 0 && grid[i][j] == 1){
				return -1;
			}
		}
	}
	return ans;
}
    
    int orangesRotting(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        
        int res = bfs(grid);
        return res;
    }
};
