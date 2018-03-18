class Solution {
public:
    vector <vector<int> > vis;
    int n,m;
    int row[4] = {1,0,-1,0};
    int col[4] = {0,1,0,-1};
    int xColor;
    void dfs(vector <vector <int> > & grid,int i,int j,int newColor) {
        vis[i][j] = 1;
        grid[i][j] = newColor;
        int p,q;
        for(int k = 0;k < 4;k++) {
            p = i+row[k];
            q = j+col[k];
            if(p >= 0 && q >= 0 && p < n && q < m && !vis[p][q] && grid[p][q] == xColor) {
                dfs(grid,p,q,newColor);
            }
        }
    }
    vector<vector<int> > floodFill(vector<vector<int>>& grid,int sr,int sc,int newColor) {
        n = grid.size();
        m = grid[0].size();
        int ans = 0;
        for(int i = 0;i < n;i++) {
            vis.push_back(vector <int> (m,0));
        }
        xColor = grid[sr][sc];
        dfs(grid,sr,sc,newColor);
        return grid;
    }

};