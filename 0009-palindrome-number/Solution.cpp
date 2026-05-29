class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        int i;
        long long ans=0;
        long long temp=x;
        int first;
        while(temp>0){
            first=temp%10;
        ans=(ans*10)+first;
         temp=temp/10;
        }
        if(ans==x){
            return true;
        }
        else{
            return false;
        }
    }
};