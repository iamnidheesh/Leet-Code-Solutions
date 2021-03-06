class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = 0;
        int minVal = INT_MAX;
        for(int i = 0;i < prices.size();i++) {
            minVal = min(minVal,prices[i]);
            maxProfit = max(maxProfit,prices[i] - minVal);
        }
        return maxProfit;
    }
};