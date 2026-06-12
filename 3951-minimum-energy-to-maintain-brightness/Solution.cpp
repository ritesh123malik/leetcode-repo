class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {

        vector<vector<int>> navorilex = intervals;

        if(brightness > n){
            return -1;
        }

        sort(intervals.begin(), intervals.end());

        long long time = 0;

        int l = intervals[0][0];
        int r = intervals[0][1];

        int i;
        for(i = 1; i < intervals.size(); i++){

            if(intervals[i][0] <= r + 1){
                r = max(r, intervals[i][1]);
            }
            else{
                time += (long long)(r - l + 1);

                l = intervals[i][0];
                r = intervals[i][1];
            }
        }

        time += (long long)(r - l + 1);

        long long bulbs = (brightness + 2) / 3;

        return bulbs * time;
    }
};