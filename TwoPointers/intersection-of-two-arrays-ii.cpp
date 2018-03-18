class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map <int,int> s1,s2;
        for(auto it = nums1.begin();it != nums1.end();it++)
            s1[*it]++;
        for(auto it = nums2.begin();it != nums2.end();it++)
            s2[*it]++;
        vector <int> v;
        for(auto it = s1.begin();it != s1.end();it++) {
            int x = min(s1[it->first],s2[it->first]);
            for(int i = 0;i < x;i++)
                v.push_back(it->first);
        }
        return v;
    }
   
};