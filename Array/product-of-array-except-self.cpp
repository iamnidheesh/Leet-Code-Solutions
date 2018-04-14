// O(n) time , O(1) space (excluding output) ,
// without using division
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int>  output(nums.size());
        for(int i = nums.size()-1;i >= 0;i--) {
        	if(i == nums.size()-1)
        		output[i] = 1;
        	else {
        		output[i] = nums[i+1]*output[i+1];
        	}
        }
        int curr;
        for(int i = 0;i < nums.size();i++) {
        	if(i == 0) {
   				curr = nums[0];
        		nums[i] = 1;
        	}
        	else {
        		int temp = nums[i];
        		nums[i] = nums[i-1]*curr;
        		curr = temp;
        	}
        }
        for(int i = 0;i < nums.size();i++) {
        	output[i] = output[i]*nums[i];
        }
        return output;
    }
};