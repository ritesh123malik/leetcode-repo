class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int i;
        int n=position.size();
        vector<pair<int,int>> car;
        for(i=0;i<n;i++){
            car.push_back({position[i],speed[i]});
        }
        sort(car.begin(),car.end());
        stack<double> st;
        double time=0;
        for(i=n-1;i>=0;i--){
            time=(double)(target-car[i].first)/car[i].second;
        if(st.empty()||time>st.top()){
            st.push(time);
        }
        }
        return st.size();
    }
};