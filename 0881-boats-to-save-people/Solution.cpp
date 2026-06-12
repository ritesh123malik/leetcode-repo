class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n=people.size();
        int left=0;
        int right=n-1;
        int sum=0;
        int count=0;
        sort(people.begin(),people.end());
        while(left<=right){
            sum=people[left]+people[right];
            if(left==right){
                count++;
                break;
            }
            else if(sum>limit){
                count++;
                right--;
                
            }
            else if(sum<limit){
                left++;
                right--;
                count++;
                
            }
            else if(sum==limit){
                count++;
                left++;
                right--;
            }
            
        }
        return count;
    }
};