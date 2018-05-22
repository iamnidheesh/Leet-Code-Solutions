class Solution {
public:
    int maxProfit(vector<int>& prices, int fee) {
        int buy = prices[0];
        int profit = 0;
        int prevSell = -1;
        for(int i = 0;i < prices.size();i++) {
        	if(prices[i] < buy && buy != prevSell)
        		buy = prices[i];
        	else if(buy == prevSell && prices[i] + fee < buy)
        		buy = prices[i];
        			
        	else if(prices[i] > buy && buy == prevSell) {
        		profit += prices[i] - buy;
        		prevSell = prices[i];
        		buy = prices[i];
            }
        	else if(prices[i] > buy + fee) {
        		profit += prices[i] - buy - fee;
        		prevSell = prices[i];
        		buy = prices[i];
        	}
        }
        return profit;
    }
};