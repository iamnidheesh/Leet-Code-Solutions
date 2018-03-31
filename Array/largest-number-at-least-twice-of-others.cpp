class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int val =0,index;
        for(int i = 0;i < nums.size();i++) {
        	if(val < nums[i]) {
        		val = nums[i];
        		index = i;
        	}
        }
        nums[index] = -1;
        int temp = val;
        val = 0;
        for(int i = 0; i  < nums.size();i++) {
        	if(val < nums[i]) {
        		val = nums[i];
        	}
        }
        if(temp >= 2*val)
        	return index;
        else
        	return -1;

    }
};