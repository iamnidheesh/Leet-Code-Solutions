class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int dp[grid.size()][grid[0].size()];
        memset(dp,0,sizeof(dp));
        dp[0][0] = grid[0][0];
        for(int i = 1;i < grid.size();i++) {
        	dp[i][0] += dp[i-1][0];
        }
        for(int i = 1;i < grid[0].size();i++) {
        	dp[0][i] += dp[0][i-1];
        }
        for(int i = 2;i < grid.size();i++) {
        	for(int j = 2;j < grid[0].size();j++) {
        		dp[i][j] += min(dp[i-1][j],dp[i][j-1]);
        	}
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};