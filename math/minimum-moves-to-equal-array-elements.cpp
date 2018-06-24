class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MAX,sum = 0;
        for(int i = 0;i < nums.size();i++) {
            sum += nums[i];
            m = min(m,nums[i]);
        }
        return sum -m*nums.size();
    }
};