class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int l = nums.size();
        bool flag = false;
        vector <pair <int,int> > v;
        for(int i = 0;i < l;i++) {
        	v.push_back({nums[i],i});
        }
        sort(v.begin(),v.end());
        for(int i = 0;i < l-1;i++) {
        	if(v[i].first == v[i+1].first &&
        		abs(v[i].second-v[i+1].second) <= k) {
        		flag = true;
        		break;
        	}
        }
        return flag;
    }
};