class Solution {
public:
	int row[4]= {1,-1,0,0};
	int col[4]= {0,0,1,-1};
    vector <vector <int> > vis;
	void dfs(int x,int y,vector <vector <char> > &grid) {
       // cout<<x<<" "<<y<<endl;
		vis[x][y] = 1;
		for(int i = 0;i < 4;i++) {
			int u = x + row[i];
            int v = y + col[i];
			if(u >= 0 && u < grid.size() && v >= 0 && v < grid[0].size() &&
				vis[u][v] == 0 && grid[u][v] == '1')
				dfs(u,v,grid); 
		}

	}
    int numIslands(vector<vector<char>>& grid) {
        
        int ans = 0;
        vis.resize(grid.size());
        for(int i = 0;i < grid.size();i++)
        	vis[i].resize(grid[0].size());
        for(int i = 0;i < grid.size();i++)
        	for(int j = 0;j < grid[0].size();j++) {
        		if(vis[i][j] == 0 && grid[i][j] == '1') {
        			dfs(i,j,grid);
        			ans++;
                   // cout<<ans<<endl;
        		}
        	}
        return ans;
    }
};