// sub-problem , odd length , dp[i] = no. of palindromes with A[i] as central element
//
class Solution {
public:

    int countSubstrings(string s) {
        int ans = 0;
        for(int i = 0;i < s.size();i++) {
        	ans += 1;
        	// odd length
        	int l = i-1;
        	int u = i+1;
        	while(l>=0 && u < s.size()&&s[l] == s[u]) {
        		l--;
        		u++;
        		ans++;
        	}
        	// even
        	l = i;
        	u = i+1;
        	while(l >= 0 && u < s.size() && s[l] == s[u]) {
        		l--;
        		u++;
        		ans++;
        	}

        }
        return ans;
    }
};