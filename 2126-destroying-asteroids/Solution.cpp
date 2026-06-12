class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& asteroids) {
        long long i;
        long long n=asteroids.size();
        long long currmass=mass;
        sort(asteroids.begin(),asteroids.end());
        for(i=0;i<n;i++){
            if(asteroids[i]<=currmass){
                currmass=currmass+asteroids[i];
            }
            else{
                return false;
            }
        }
        return true;
    }
};