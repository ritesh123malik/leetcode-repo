class Solution {
public:

    string generate(string s){

        string res="";
        int n=s.size();

        int i=0;

        while(i<n){

            int cnt=1;

            while(i+1<n && s[i]==s[i+1]){
                cnt++;
                i++;
            }

            res+=to_string(cnt);
            res+=s[i];

            i++;
        }

        return res;
    }

    string countAndSay(int n) {

        string ans="1";

        for(int i=2;i<=n;i++){
            ans=generate(ans);
        }

        return ans;
    }
};