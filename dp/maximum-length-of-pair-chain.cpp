class Solution {
public:
    static bool cmp(vector <int> &p1,vector <int> &p2) {
        if(*p1.begin() < *p2.begin() || (*p1.begin() == *p2.begin() && *p1.rbegin() <= *p2.rbegin()))
            return true;
        else
            return false;
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        sort(pairs.begin(),pairs.end(),cmp);
        vector <int> dp(n+1,1);
        for(int i = 1;i < n;i++) {
        	for(int j = 0;j < i;j++) {
        		if(*pairs[j].rbegin() < *pairs[i].begin() && dp[i] < 1 + dp[j]) {
        			dp[i] = dp[j] + 1;
        		}
        	}
        }
        int ans = 0;
        for(int i = 0;i < n;i++)
        	ans = max(ans,dp[i]);
        return ans;
    }
};