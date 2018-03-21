class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector <int> v (nums.size());
        for(int i = 0;i < nums.size();i++) {
            v[nums[i]-1] = 1;
        }
        nums.clear();
        for(int i = 0;i < v.size();i++) {
            if(!v[i])
                nums.push_back(i+1);
        }
        return nums;
    }
};