class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector <int> backup = nums;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++) {
        	if(nums[i] != backup[i])
        		backup[i] = INT_MIN;
        }
        int l = 0,indexl = -1;
        while(l < backup.size()) {
        	if(backup[l] == INT_MIN) {
        		indexl = l;
        		break;
        	}
        	l++;
        }
        if(indexl == -1)
        	return 0;
        int u = backup.size()-1,indexu = -1;
        while(u >= 0 ) {
        	if(backup[u] == INT_MIN) {
        		indexu = u;
        		break;
        	}
        	u--;
        }
        return indexu - indexl + 1;
    }
};