class Solution {
public:
	vector <vector <int> > ans;
	vector <int> v;
	void comb(vector <int> &candidates, int target) {
		if(target == 0) {
			vector <int> s;
			for(auto i = v.begin();i != v.end();i++) {
				s.push_back(candidates[*i]);
			}
			ans.push_back(s);

			return;
		}
		for(int i = (v.size() == 0) ? 0 : *(v.rbegin());i < candidates.size();i++) {
			if(candidates[i] <= target) {
				v.push_back(i);
				comb(candidates,target - candidates[i]);
				v.pop_back();
			}
		}

	}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        comb(candidates,target);
        return ans;
    }
};