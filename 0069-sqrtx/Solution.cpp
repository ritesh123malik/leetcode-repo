class Solution {
public:
    int mySqrt(int x) {
        int final;
        double exponent=0.5;
        final=pow(x,exponent);
        return final;
        
    }
};