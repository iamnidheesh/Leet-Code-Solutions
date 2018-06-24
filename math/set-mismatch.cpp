class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector <int> mark(nums.size()+1);
        vector <int> ans;
        for(int i = 0;i < nums.size();i++)
            mark[nums[i]]++;
        for(int i = 1;i <= nums.size();i++) {
            if(mark[i] == 2)
                ans.push_back(i);
        }
        for(int i = 1;i <= nums.size();i++) {
            if(mark[i] == 0)
                ans.push_back(i);
        }
        return ans;
    }
};