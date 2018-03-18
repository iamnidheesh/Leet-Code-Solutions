class Solution {
public:
	vector <vector<int> > vis;
	int ct,n,m;
	int row[4] = {1,0,-1,0};
	int col[4] = {0,1,0,-1};
	void dfs(vector <vector <int> > & grid,int i,int j) {
		vis[i][j] = 1;
        int p,q;
        int x = 0;
		for(int k = 0;k < 4;k++) {
			p = i+row[k];
			q = j+col[k];

			if(p >= 0 && q >= 0 && p < n && q < m &&  grid[p][q]) {
				if(!vis[p][q])
                    dfs(grid,p,q);
                x++;
			}
		}
        ct += 4 - x;
	}
    int islandPerimeter(vector<vector<int>>& grid) {
    	n = grid.size();
    	m = grid[0].size();
    	for(int i = 0;i < n;i++) {
    		vis.push_back(vector <int> (m,0));
    	}
    	for(int i = 0;i < n;i++) {
    		for(int j = 0;j < m;j++) {
    			if(vis[i][j] == 0 && grid[i][j] == 1) {
                    dfs(grid,i,j);
    			}
    		}
    	}
    	return ct;
    }

};