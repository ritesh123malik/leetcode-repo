class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry=0;
        int i=a.size()-1;
        int j=b.size()-1;
        while(i>=0||j>=0||carry){
            if(i>=0){
                carry=carry+a[i]-'0';
                i--;
            }
            if(j>=0){
                carry=carry+b[j]-'0';
                j--;
            }
            res.push_back((carry % 2) + '0');

            carry=carry/2;
        }
       
        reverse(res.begin(), res.end());

        return res;

        
    }
};