class Solution {
public:
    int findLength(vector<int>& A, vector<int>& B) {
        int dp[A.size()+1][B.size()+1];
        memset(dp,0,sizeof(dp));
        for(int i = 0;i <= A.size();i++) {
        	for(int j = 0;j <= B.size();j++) {
        		if(i == 0 || j == 0)
        			dp[i][j] = 0;
        		else if(A[i] == B[j]) {
        			dp[i][j] = 1 + dp[i-1][j-1];
        		}
        		else
        			dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        	}
        }
        return dp[A.size()-1][B.size()-1];
    }
};