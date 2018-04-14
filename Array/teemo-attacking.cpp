class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0;
        if(timeSeries.size() == 0)
        	return ans;
        int limit = timeSeries[0]+duration;
        for(int i = 1;i < timeSeries.size();i++) {
        	if(timeSeries[i] >= limit) {
        		ans += duration;
        	}
        	else {
        		ans += (timeSeries[i] - timeSeries[i-1]);
        	}
        	limit = timeSeries[i] + duration;
        }
        ans += duration;
        return  ans;
    }
};