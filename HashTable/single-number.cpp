class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map <int,int> m 
        for(int i = 0;i < nums.size();i++) {
        	m[nums[i]]++;
        }
        for(auto i = m.begin();i != m.end();i++) {
        	if(i->second == 2)
        		return i->first;
        }
    }
};