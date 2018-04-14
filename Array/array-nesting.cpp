class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        vector <unordered_map <int,int> > s(nums.size());
        vector <bool> flag(nums.size(),false);
        vector <int> pre;
        int ans = 0;
        int ct = 0;
        for(int i = 0;i < nums.size();i++) {
        	int index = i;
            ct = 0;
            if(!flag[i])
                while(s[i][index] == 0) {
                    ct++;
                    s[i][index] = nums[index]+1;
                    flag[nums[index]] = true;
                    pre.push_back(ct);
                    index = nums[index];
                }
        	ans = max(ans,ct);
            for(int j = 0;j < pre.size();j++) {
                ans = max(ans,ct - pre[j]);
            }
            pre.clear();
        }
        return ans;
    }
};