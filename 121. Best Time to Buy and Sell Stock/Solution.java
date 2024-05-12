/*
* 121. Best Time to Buy and Sell Stock
* https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
* Time: O(n) | Space: O(1)
*/

class Solution {
    public int maxProfit(int[] prices) {
        int l = 0, r = 1, maxProfit = 0; // left=buy, right=sell

        while (r < prices.length) {
            if (prices[l] < prices[r]) {
                int p = prices[r] - prices[l];
                maxProfit = p > maxProfit ? p : maxProfit;
            } else {
                l = r;
            }
            r++;
        }

        return maxProfit;
    }
}
