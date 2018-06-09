class Solution {
public:
    int findMin(vector<int>& nums) {
    	int l = 0,u = nums.size()-1;
        if(u == 0)
            return nums[u];
        else if(nums[l] < nums[u])
            return nums[l];
    	while(l < u) {
    		int mid = (l+u)/2;
    		if(nums[mid] > nums[l]) {
    			l = mid;
    		}
    		else if(nums[mid] < nums[l]) {
    			u = mid;
    		}
    		else
    			break;
    	}
    	return nums[u];
    }
};