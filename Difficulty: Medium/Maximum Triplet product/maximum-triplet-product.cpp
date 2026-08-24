class Solution {
  public:
    int maxTripletProduct(vector<int>& arr) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int option1=1LL* arr[n-1]*arr[n-2]*arr[n-3];
        int option2=1LL* arr[0]*arr[1]*arr[n-1];
        return max(option1,option2);
    }
};