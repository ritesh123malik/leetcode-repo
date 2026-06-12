class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int i;
        int sum = 0;
        int n = cost.size();

        sort(cost.begin(), cost.end(), greater<int>());

        for(i = 0; i < n; i++) {
            if((i + 1) % 3 == 0) {
                continue;
            }
            sum = sum + cost[i];
        }

        return sum;
    }
};