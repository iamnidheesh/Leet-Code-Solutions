class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        
        if(nums.size() == 0)
            return nums;
        if(nums.size()*nums[0].size() != r*c)
            return nums;
        vector <vector<int> > v ;
        vector <int> temp;
        for(int i = 0;i < nums.size();i++)
            for(int j = 0;j < nums[0].size();j++) {
                if(temp.size() < c) {
                    temp.push_back(nums[i][j]);
                }
                else {
                    v.push_back(temp);
                    temp.clear();
                    temp.push_back(nums[i][j]);
                }
            }
        v.push_back(temp);
        return v;
    }
};