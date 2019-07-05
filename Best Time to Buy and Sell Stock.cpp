class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i,j,n=prices.size();
          int profit = 0,profit2;
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                 profit2 = prices[j] - prices[i];
                if (profit2 > profit)
                    profit = profit2;
            }
        }
        return profit;
    }
};
