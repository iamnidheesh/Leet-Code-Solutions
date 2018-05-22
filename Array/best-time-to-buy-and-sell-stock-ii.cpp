class Solution {
public:
    int maxProfit(vector<int>& prices) {
    	if(prices.size() == 0)
    		return 0;
        int buy = prices[0],profit = 0;
        for(int i = 1;i < prices.size();i++) {
        	if(prices[i] < buy)
        		buy = prices[i];
        	else  {
        		profit += prices[i] - buy;
        		buy = prices[i];
        	}
        }
        return profit;
    }
};