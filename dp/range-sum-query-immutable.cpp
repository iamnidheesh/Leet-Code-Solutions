class NumArray {
public:
    vector <int> mem;
    NumArray(vector<int> nums) {
        mem.push_back(0);
        for(int i = 0;i < nums.size();i++) {
            mem.push_back(mem[i] + nums[i]);
        }
    }
    
    int sumRange(int i, int j) {
        
        return mem[j+1] - mem[i];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray obj = new NumArray(nums);
 * int param_1 = obj.sumRange(i,j);
 */