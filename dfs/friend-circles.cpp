class Solution {
public:
	int vis[201];
	void dfs(int x,vector<vector<int>>& M) {
		vis[x] = 1;
		for(int i = 0;i < M.size();i++) {
			if(vis[i] == 0 && M[x][i]) {
				dfs(i,M);
			}
		}
	}
    int findCircleNum(vector<vector<int>>& M) {
        int ct = 0;
        for(int i = 0;i < M.size();i++) {
        	if(vis[i] == 0) {
        		ct++;
        		dfs(i,M);
        	}
        }
        return ct;
    }
};