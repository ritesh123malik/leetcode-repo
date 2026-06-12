class Solution {
public:
    int digitFrequencyScore(int n) {
        int sum=0;
        while(n%10>0||n/10>0){
            int temp=n%10;
            sum=sum+temp;
            n=n/10;
        }
        return sum;
    }
};