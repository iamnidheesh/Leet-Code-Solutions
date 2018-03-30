class Solution {
public:
	int freq[50001],front[50001],back[50001];
    int findShortestSubArray(vector<int>& nums) {
        for(int i = 0;i < nums.size();i++) {
        	freq[i]++;
        }
        int mf = 0;
        for(int i = 0;i <= 49999;i++) {
        	if(mf < freq[i]) {
        		mf = freq[i];
        	}
        }
        for(int i = 0;i < nums.size();i++) {
        	if(front[nums[i]] == 0) {
        		front[nums[i]] = i+1;
        	}

        }
        for(int i = nums.size()-1;i >= 0;i--) {
        	if(back[nums[i]] == 0) {
        		back[nums[i]] = i+1;
        	}
        }
        int ans = 50000;
        for(int i = 0;i < nums.size();i++) {
        	if(freq[nums[i]] == mf) {
        		ans = min(ans,back[nums[i]]-front[nums[i]]+1);
        	}
        }
        return ans;

    }
};