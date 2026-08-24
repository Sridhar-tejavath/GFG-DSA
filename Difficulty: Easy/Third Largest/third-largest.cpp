class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        if(arr.size()<3) return -1;
        return arr[arr.size()-3];
    }
};