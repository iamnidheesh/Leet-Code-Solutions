class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double ans = 0.0;
        for(int i = 1;i < nums.size();i++) {
        	nums[i] += nums[i-1];
        }
        ans = (nums[k-1]*1.0);
        int l = 0,u = k;
        while(u < nums.size()) {
        	ans = max(ans,(nums[u]-nums[l])*1.0);
        	l++;u++;
        }
        return ans/k; 
    }
};