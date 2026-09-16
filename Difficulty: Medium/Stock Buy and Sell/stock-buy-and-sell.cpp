class Solution {
  public:
  
    int solve(int i,int buy,vector<int> &arr,vector<vector<int>> &dp){
        
        if(i==arr.size()) return 0;
        
        if(dp[i][buy]!=-1) return dp[i][buy];
        
        if(buy==1){
            
            int take=-arr[i]+solve(i+1,0,arr,dp);
            int skip=solve(i+1,1,arr,dp);
            
            return dp[i][buy]=max(take,skip);
        }
        else{
            
            int take=arr[i]+solve(i+1,1,arr,dp);
            int skip=solve(i+1,0,arr,dp);
            
            return dp[i][buy]=max(take,skip);
        }
    }
    int stockBuySell(vector<int> &arr) {
        // code here
        int n=arr.size();
        
        vector<vector<int>> dp(n,vector<int>(2,-1));
        
        return solve(0,1,arr,dp);
    }
};