class Solution {
public:
	vector <vector <int> > ans;
	vector <int> v;
	void comb(int k,int n) {
		if(n == 0 && k == 0) {
			ans.push_back(v);
			return;
		}
		else if(n == 0 || k == 0) {
			return;
		}
		for(int i = (v.size() == 0) ? 1 : *(v.rbegin())+1;i <= 9;i++) {
			if(i <= n) {
				v.push_back(i);
				comb(k-1,n-i);
				v.pop_back();

			}
			else
				break;
		}
	}
    vector<vector<int>> combinationSum3(int k, int n) {
    	comb(k,n);
    	return ans;
    }
};