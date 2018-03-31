class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if(nums.size() == 0)
        	return 0;
        int prev = nums[0],ans = 1,curr = 1;
        for(int i = 1;i < nums.size();i++) {
        	if(nums[i] > prev) {
        		curr++;
        	}
        	else {
        		curr = 1;
        	}
        	prev = nums[i];
        	ans = max(ans,curr);
        }
        return ans;
    }
};