class Solution {
  public:
    int maxSum(vector<int> &arr) {
        // code here
        int n=arr.size();
        int total=0;
        int current=0;
        for(int i=0;i<n;i++){
            total += arr[i];
            current += i*arr[i];
        }
        
        int ans=current;
        for(int i=1;i<n;i++){
            current = current+total-n*arr[n-i];
            
            ans=max(ans,current);
        }
        return ans;
    }
};