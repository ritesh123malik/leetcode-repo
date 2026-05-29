class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i=0;
        int n=prices.size();
        int minprice=INT_MAX;
        int maxprofit=0;
        for(i=0;i<n;i++){
            minprice=min(prices[i],minprice);
            maxprofit=max(maxprofit,prices[i]-minprice);
        }
        return maxprofit;
    }
};