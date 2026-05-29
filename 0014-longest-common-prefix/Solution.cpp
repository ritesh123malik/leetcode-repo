class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }

       string pre=strs[0];
       int n=strs.size();
       for(int i=1;i<n;i++){
        while(strs[i].find(pre)!=0){
            pre=pre.substr(0,pre.length() - 1);
            if(pre.empty()){
                return "";
            }
        }
       }
       return pre; 
    }
};