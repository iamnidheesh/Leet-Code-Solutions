class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set <int> s;
        bool flag = false;
        for(int i = 0;i < nums.size();i++) {
            if(s.find(nums[i]) == s.end()) {
                s.insert(nums[i]);
            }
            else {
                flag = true;
                break;
            }
        }
        return flag;
    }
};