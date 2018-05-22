class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int ans = 0;
        bool flag = false;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < nums.size();i++) {
            flag = true;
        	for(int j = i-1;j >= 0;j--) {
        		for(int k = j-1;k >= 0;k--) {
                    if(nums[j] + nums[k] <= nums[i]) {
                        flag = false;
                        break;
                    }
        			else
                        ans++;
        		}
             
        	}
        }
        return ans;
    }
};