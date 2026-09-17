class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() == 1) return 0;

        int maxProfit = 0;
        int buyPrice = prices[0];

        for(int i=1; i<prices.size(); i++) {
            int profit = prices[i] - buyPrice;
            maxProfit = max(maxProfit, profit);

            buyPrice = min(buyPrice, prices[i]);
        }

        return maxProfit;
    }
};