class Solution {
public:
	vector <vector <int> > ans;
	vector <int> v;
    int last = -1;
	void comb(vector <int> &candidates, int target) {
		if(target == 0) {
			vector <int> s;
			for(auto i = v.begin();i != v.end();i++) {
				s.push_back(candidates[*i]);
			}
			ans.push_back(s);
			return;
		}
		for(int i = (v.size() == 0) ? 0 : (*(v.rbegin())+1);i < candidates.size();i++) {
			if(candidates[i] <= target && candidates[i] != last) {
				v.push_back(i);
				comb(candidates,target - candidates[i]);
                last = candidates[*(v.rbegin())];
				v.pop_back();
			}
		}

	}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        comb(candidates,target);
        return ans;
    }
};