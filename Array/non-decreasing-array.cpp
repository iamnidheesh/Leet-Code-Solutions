class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int ct = 0;
        for(int i = 0;i < nums.size()-1;i++) {
        	if(nums[i] > nums[i+1])
        		ct++;
        }
        if(ct == 1 || ct == 0)
        	return true;
        return false;
    }
};