class Solution {
  public:
    vector<int> nextGreatest(vector<int> arr) {
        // code here
        int n=arr.size();
        vector<int> ans(n);
        int maxi=-1;
        for(int i=n-1';i>=0;i--){
            ans[i]=maxi;
            maxi=max(maxi,arr[i]);
        }
        return ans;
    }
};