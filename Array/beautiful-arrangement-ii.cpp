class Solution {
public:
    vector<int> constructArray(int n, int k) {
        vector <int> ans;
        ans.push_back(1);
        int ct = k;
       	for(int i = 0;i < k;i++) {
       		ans.push_back(*ans.rbegin() + ct);
       		if(ct > 0) {
       			ct--;
       			ct *= -1;
       		}
       		else {
       			ct *= -1;
       			ct--;
       		}
       	}
       	for(int i = 0; i < n-k-1;i++) {
       		ans.push_back(i+k+2);
       	}
        return ans;
    }
};