class Solution {
  public:
  
    static bool compare(int a,int b){
        if(a%2==0 && b%2==0){
            return a<b;
        }
        if(a%2!=0 && b%2!=0){
            return a<b;
        }
        return a%2==0;
    }
    void segregateEvenOdd(vector<int>& arr) {
        // code here
        sort(arr.begin(),arr.end(),compare);
        
    }
};