class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0;i < 2n;i+= 2) {
        	sum += a[i];
        }
        return sum;
    }
};