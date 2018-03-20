class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector <int> v;
        int p = 0,q = 0;
        while(p < m && q < n) {
        	if(nums1[p] <= nums2[q]) {
        		v.push_back(nums1[p++]);
        	}
        	else
        		v.push_back(nums2[q++]);
        }
        while(p < m) {
        	v.push_back(nums1[p++]);
        }
        while(q < n) {
        	v.push_back(nums2[q++]);
        }
        for(int i = 0;i < v.size();i++) {
        	nums1[i] = v[i];
        }
    }
};