class Solution {
public:
	vector <int> vis;
	string v = "";
	int x = 0;
	void per(string &nums) {
		if(x == 0)
			return;
		if(v.size() == nums.size()) {
			ans.push_back(v);
			x--;
			return;
		}
		for(int i = 0;i < nums.size();i++) {
			if(vis[i] != 1) {
				vis[i] = 1;
				v.push_back(nums[i]);
				per(nums);
				if(x == 0)
					return;
				v.pop_back();
				vis[i] = 0;
			}
		}
	}
    vector<vector<int>> getPermutation(int n,int k) {
        string nums = "";
        for(int i = 1;i <= n;i++) {
        	nums += (i + '0')
        }
       	x = k;
        vis.resize(n);
        per(nums);
        return v;
    }
};