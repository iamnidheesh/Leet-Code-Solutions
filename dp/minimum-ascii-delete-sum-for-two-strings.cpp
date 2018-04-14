class Solution {
public:
    int minimumDeleteSum(string s1, string s2) {
		int lcs[1001][1001] = {0};
		string lseq = "";
		for(int i = 0;i < s1.size();i++) {
			for(int j = 0;j < s2.size();j++) {
				if(i == 0 || j == 0) {
					lcs[i][j] = 0;
				}
				else if(s1[i-1] == s2[j-1]) {
					lcs[i][j] = 1 + lcs[i-1][j-1];
				}
				else {
					lcs[i][j] = max(lcs[i-1][j],lcs[i][j-1]);
				}
			}
		}

    }
};