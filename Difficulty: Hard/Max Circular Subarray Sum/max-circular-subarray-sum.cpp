class Solution {
  public:
    int maxCircularSum(vector<int> &arr) {
        // code here
        int total=0;
        
        int maxSum=arr[0];
        int currMax=arr[0];
        
        int minSum=arr[0];
        int currMin=arr[0];
        
        for(int i=1;i<arr.size();i++){
            
           currMax=max(arr[i],currMax+arr[i]);
           maxSum= max(maxSum,currMax);
           
           currMin=min(arr[i],arr[i]+currMin);
           minSum=min(currMin,minSum);
           
           total += arr[i];
        }
        
        total += arr[0];
        
        if(maxSum<0) return maxSum;
        
        return max(maxSum,total-minSum);
        
    }
};