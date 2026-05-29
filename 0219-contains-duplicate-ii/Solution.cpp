class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> st;
        int i;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(i>k){
                st.erase(nums[i-k-1]);
            }
            if(st.find(nums[i])!=st.end()){
                return true;
            }


            st.insert(nums[i]);
        }
        return false;
    }
};