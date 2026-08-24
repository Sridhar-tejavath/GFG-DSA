class Solution {
  public:
    long long int totalFine(int date, vector<int> &car, vector<int> &fine) {
        // code here
        long long fines=0;
        for(int i=0;i<car.size();i++){
            if((date%2==0 && car[i]%2!=0) || (date%2!=0 && car[i]%2==0)){
                fines += fine[i];
            }
        }
        return fines;
    }
};