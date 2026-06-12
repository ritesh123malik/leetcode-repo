class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0;
        int j=0;
        int n1=s.size();
        int n2=t.size();
        int temp=0;
        for(i=0;i<n1;i++){
            for(j=temp;j<n2;j++){
                 if(t[j]==s[i]){
                    temp=j+1;
                    break;
                }
                
                
            }
            if(t[j]!=s[i]){
                return false;
            }
        }
        return true;
    }
};