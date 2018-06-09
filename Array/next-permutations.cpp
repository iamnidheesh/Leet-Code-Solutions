class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        bool flag = false;
        int index1 = 0;
        for(int i = nums.size()-2;i >= 0;i--) {
        	if(nums[i] < nums[i+1]) {
        		index1 = i;
        		flag = true;
        		break;
        	}
        }
        if(!flag) {
        	reverse(nums.begin(),nums.end());
        	return nums;
        }
        for(int j = nums.size()-1; j > index1;j--) {
        	if(nums[j] > nums[index1]) {
        		swap(nums[j],nums[index1])
        		return nums;
        	}
        }
        
    }
};