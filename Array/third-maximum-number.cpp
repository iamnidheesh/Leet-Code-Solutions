class Solution {
public:
    int thirdMax(vector<int>& nums) {
    	int all_max = INT_MIN,s_max = INT_MIN,t_max = INT_MIN;
    	for(int i = 0;i < nums.size();i++) {
    		if(nums[i] >= all_max )
    			all_max = nums[i];
    	}
    	for(int i = 0;i < nums.size();i++) {
    		if(nums[i] >= s_max && nums[i] != all_max)
    			s_max = nums[i];
    	}
    	bool flag = false;
    	for(int i = 0;i < nums.size();i++) {
    		if(nums[i] >= t_max && nums[i] != all_max && nums[i] != s_max) {
    			t_max = nums[i];
    			flag = true;
    		}
    	}
    	if(!flag)
    		return all_max;
    	return t_max;
    }
};