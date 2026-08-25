class Solution {
  public:
    bool isProduct(vector<int>& arr, long long target) {
        // code here
        sort(arr.begin(),arr.end());
        long long n=arr.size();
        int i=0;
        int j=n-1;
        while(i<j){
            long long product=1LL * arr[i]*arr[j];
            if(product==target){
                return true;
            }
            else if(product < target){
                i++;
            }else{
                j--;
            }
        }
        return false;
    }
};