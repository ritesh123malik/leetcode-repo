class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i;
        int profit=0;
        int n=prices.size();
        for(i=1;i<n;i++){
            if(prices[i]>prices[i-1]){
                profit=profit+prices[i]-prices[i-1];
            }
        }
        return profit;
    }
};