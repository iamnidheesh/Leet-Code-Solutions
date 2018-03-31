class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack <int> st;
        vector <int> v;
        map <int,int> m;
        if(nums.empty())
        	return v;
        st.push(nums[0]);
        for(int i = 1;i < nums.size();i++) {
        	int next = nums[i];
        	if(!st.empty()) {
        		int curr = st.top();
        		while(next > curr) {
        			m[curr] = next;
        			st.pop();
        			if(st.empty())
        				break;
        			else
        				curr = st.top(); 
        		}
        	}
        	st.push(next);
        }
        while(!st.empty()) {
        	m[st.top()] = -1;
        	st.pop();
        }
        for(int i  = 0;i < findNums.size();i++) {
        	v.push_back(m[findNums[i]]);
        }
        return v;
    }
};