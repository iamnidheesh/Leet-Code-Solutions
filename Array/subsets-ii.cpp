class Solution {
public:
	vector <vector<int> > ans;
	vector <int> v;
	int length;
	int last = INT_MIN;
	void insert(int k,vector <int>& nums) {
		if(k == 0) {
			vector <int> s;
			for(auto i = v.begin(); i != v.end();i++) {
				s.push_back(nums[*i]);
			}
			ans.push_back(s);
			s.clear();
			return;
		}
		for(int i = (v.size() == 0) ? 0 : (*(v.rbegin())+1);i < length;i++) {
			
			if(nums[i] != last) {
				v.push_back(i);
				insert(k-1,nums);
				last = nums[*v.rbegin()];
				v.pop_back();
			}
		}
	}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        length = nums.size();
        ans.push_back(v);
        sort(nums.begin(),nums.end());
        for(int i = 1;i <= length;i++)
        	insert(i,nums),last = INT_MIN;
        return ans;
    }
};