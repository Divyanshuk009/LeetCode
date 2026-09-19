class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int profit;
        int maxProfit = 0;
        for (int sell = 1; sell < prices.size(); sell++) {
            if (prices[buy] < prices[sell]) {
                profit = prices[sell] - prices[buy];
                maxProfit = max(maxProfit, profit);
            } else {
                profit = 0;
                buy = sell;
            }
        }
        return maxProfit;
    }
};