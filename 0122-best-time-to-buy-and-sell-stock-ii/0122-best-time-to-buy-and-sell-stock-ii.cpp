class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int start = prices[0];
        int maxi = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (start < prices[i])
                maxi += prices[i] - start;
            start = prices[i];
        }
        return maxi;
    }
};