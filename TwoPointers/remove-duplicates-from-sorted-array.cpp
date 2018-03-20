class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0)
        	return 0;
        for(int i = 1;i < nums.size();i++) {
        	if(nums[i] == nums[i-1]) {
        		int u = i;
        		while(u < nums.size() && nums[u] == nums[i-1]) {
        			u++;
        		}
        		if(u == nums.size())
        			break;
        		nums[i] = nums[u];
        		while(u != i){
        			nums[u] = nums[i];
        			u--;	
        		}
        		
        	}
        }
        int ans = 1;
        for(int i = 1;i < nums.size();i++) {
        	if(nums[i-1] != nums[i])
        		ans++;
        }
        return ans;
    }
};