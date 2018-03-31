class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    	if(nums.size() == 0)
    		return -1;
    	vector <int> backup = nums;
        int sum = nums[0];
        for(int i = 1;i < nums.size();i++)
        	nums[i] += nums[i-1];
        sum = nums[nums.size()-1];
        for(int i = 0;i < nums.size();i++) {
        	if((nums[i] - backup[i]) == (sum - nums[i]))
        		return i;
        }
        return -1;
    }
};