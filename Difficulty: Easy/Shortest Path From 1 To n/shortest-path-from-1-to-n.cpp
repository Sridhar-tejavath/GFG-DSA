class Solution {
  public:
    int minimumStep(int n) {
        // code here
        
        vector<int> dp(n+1,0);
        
        for(int i=2;i<=n;i++){
            
            dp[i]=dp[i-1]+1;
            
            if(i%3==0){
                dp[i]=min(dp[i],dp[i/3]+1);
            }
        }
        
        return dp[n];
    }
};