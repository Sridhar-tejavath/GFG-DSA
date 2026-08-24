class Solution {
  public:
    int findElement(vector<int> &arr) {
        // code here
        
        int n=arr.size();
        vector<int> rightMin(n);
        rightMin[n-1]=arr[n-1];
        
        for(int i=n-2;i>=0;i--){
            rightMin[i]=min(arr[i],rightMin[i+1]);
        }
        
        int leftMax=arr[0];
        for(int i=1;i<n-1;i++){
            if(leftMax<arr[i] && arr[i]<rightMin[i+1]){
                return arr[i];
            }
            leftMax=max(leftMax,arr[i]);
        }
        return -1;
    }
};