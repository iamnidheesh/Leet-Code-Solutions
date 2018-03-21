class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int ct = 0;
        if(nums.size() < 2)
        	return 0;
        sort(nums.begin(),nums.end());
        int u = 0;
        for(int i = 0;i < nums.size();i++) {
        	if(u == i)
        		u++;
        	while(u < nums.size() && nums[u]-nums[i] < k) {
        		u++;
        	}
        	if(u < nums.size()) {
        		if(nums[u] - nums[i] == k) {
        			ct++;
        			while(u < nums.size() && nums[u] - nums[i] == k)
        				u++;
        		}
        	}
        	else
        		break;
        }
        return ct;
    }
};