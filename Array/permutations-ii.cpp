class Solution {
public:
	vector <int> vis;
	vector <int> v;
    vector <vector <int> > ans;
    int last = INT_MIN;
	void per(vector <int> & nums) {
		if(v.size() == nums.size()) {
			ans.push_back(v);
			return;
		}
		for(int i = 0;i < nums.size();i++) {
			if(vis[i] != 1 && last != nums[i]) {
				vis[i] = 1;
				v.push_back(nums[i]);
				per(nums);
				last = *(v.rbegin());
				v.pop_back();
				vis[i] = 0;
			}
		}
	}
    vector<vector<int>> permute(vector<int>& nums) {
        if(nums.size() == 0)
        	return ans;
        sort(nums.begin(),nums.end());
        vis.resize(nums.size());
        per(nums);
        return ans;
    }
};