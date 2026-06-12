class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int n=operations.size();
        int i;
        for(i=0;i<n;i++){
            if(operations[i]=="D"){
                s.push(2*s.top());
            }
            else if(operations[i]=="C"){
                s.pop();
            }
            else if(operations[i]=="+"){
                int a=s.top();
                s.pop();
                int b=s.top();
                s.push(a);
                s.push(a+b);
            }
            else{
                s.push(stoi(operations[i]));
            }
        }
        int sum=0;
        while(!s.empty()){
            sum=sum+s.top();
            s.pop();
        }
        return sum;
    }
};