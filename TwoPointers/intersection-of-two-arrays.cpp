class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> s1,s2;
        for(auto it = nums1.begin();it != nums1.end();it++)
            s1.insert(*it);
        for(auto it = nums2.begin();it != nums2.end();it++)
            s2.insert(*it);
        vector <int> v;
        for(auto it = s1.begin();it != s1.end();it++) {
            if(s2.find(*it) != s2.end())
                v.push_back(*it);
        }
        return v;
    }
   
};