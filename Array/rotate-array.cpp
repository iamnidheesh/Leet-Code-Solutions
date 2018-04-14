class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector <int> backup = nums;
        for(int i = 0;i < nums.size();i++) {
        	nums[i] = backup[(i-k%n+n)%n];
        }
    }
};