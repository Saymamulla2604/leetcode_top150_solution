class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        if (n <= 1) {
            return 0; // No profit can be obtained with less than two prices
        }

        int answer = 0;
        int minPrice = prices[0]; // Initialize the minimum price to the first element

        for (int i = 1; i < n; i++) {
            // Update the minimum price
            minPrice = min(minPrice, prices[i]);

            // Update the maximum profit if selling at the current price would give a better profit
            answer = max(answer, prices[i] - minPrice);
        }

        return answer;
    }
};
