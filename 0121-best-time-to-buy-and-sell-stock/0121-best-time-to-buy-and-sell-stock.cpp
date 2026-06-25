class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int buy_price=prices[0];
        int ans =0;

        for(int i =1;i<n;i++){
            ans= max(prices[i]-buy_price , ans);
            buy_price =min(buy_price,prices[i]);
        }
        return ans;
    }
};