class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int ans = 0;
        int minSize = INT_MAX;
        for(int i = 0;i < strs.size();i++) {
        	minSize = min(minSize,strs[i].size());
        }
        bool flag = true;
        while(ans < minSize) {

        	for(int i = 1;i < str.size();i++) {
        		if(strs[i][ans] != strs[i-1][ans]) {
        			flag = false;
        			break;
        		}
        	}
        	if(!flag)
        		break;
        	else
        		ans++;
        }
        return ans;
    }
};