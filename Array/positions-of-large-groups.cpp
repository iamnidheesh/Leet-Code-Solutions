class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
       	vector <vector<int> > ans;
       	int start = 0;
        for(int i = 0;i < S.size();i++) {
        	if(i == S.size()-1 || S[i] != S[i+1]) {
        		if(i - start >= 2) {
        			vector <int> v;
        			v.push_back(start);
        			v.push_back(i);
        			ans.push_back(v);
        		}
       			start = i+1;
        	}
        }
        return ans;
    }
};