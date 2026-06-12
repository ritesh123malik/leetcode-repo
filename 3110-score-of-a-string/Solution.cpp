class Solution {
public:
    int scoreOfString(string s) {
        int temp=s[0];
        int i;
        int sum=0;
        int final=0;
        int n=s.size();
        for(i=0;i<n;i++){
            sum=abs(s[i]-temp);
            final=final+sum;
            temp=s[i];
        }
        return final;
    }
};