class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int left=0;
        int right=0;
        int n=g.size();
        
        int n2=s.size();
        int count=0;
        while(left<n&&right<n2){
            if(g[left]<=s[right]){
                count++;
                left++;
                right++;
            }
            else{
                right++;
            }

            
        }
        return count;
    }
};