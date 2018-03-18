// very easy solution is possible...
//put all non zero at front , and rest all zeros
class Solution {
public:
	void swap(vector <int>& nums,int z,int nz) {
		int temp = nums[z];
		nums[z] = nums[nz];
		nums[nz] = temp;
	}
    void moveZeroes(vector<int>& nums) {
        int zero = -1;
        int nz = 0;
        //first zero
        for(int i = 0;i < nums.size();i++) {
        	if(nums[i] == 0) {
        		zero = i;
        		break;
        	}
        }
        nz = zero;
        if(zero == -1)
        	return;
        int s = nums.size();
        while(zero < s) {
        	//next one
        	while(nz < s && nums[nz] == 0)
        		nz++;
        	if(nz < s) {
        		swap(nums,zero,nz);
        	}
        	else
        		break;
        	zero++;
        	// next zero
        	while(zero < s && nums[zero] != 0) {
        		zero++;
        	}
        	
        }
    }
};