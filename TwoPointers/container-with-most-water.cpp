class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans = 0;
        int l = 0,r = height.size()-1;
        while(l != r) {
        	if(height[l] > height[r]) {
        		ans = max(ans,height[r]*(r-l));
        		r--;
        	}
        	else {
        		ans = max(ans,height[l]*(r-l));
        		l++;
        	}
        }
        return ans;
    }
};