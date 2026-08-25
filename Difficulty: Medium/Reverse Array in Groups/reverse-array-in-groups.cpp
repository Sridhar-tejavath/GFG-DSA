class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i+=k){
            reverse(arr.begin()+i,arr.begin()+min(i+k,n));
        }
    }
};
