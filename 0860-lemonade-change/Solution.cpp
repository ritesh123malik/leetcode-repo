class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int left=0;
        int count1=0;
        int count2=0;
        int count3=0;
        int i=0;
        int n=bills.size();
        for(i=0;i<n;i++){
            if(bills[i]==5){
                count1++;
            }
            else if(bills[i]==10){
                count2++;
                if(count1>0){
                    count1--;
                }else{
                    return false;
                }
            }
            else if(bills[i]==20){
                count3++;
                if(count2>0&&count1>0){
                    count2--;
                    count1--;
                }
                else if(count1>=3){
                    count1=count1-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
        
    }
};