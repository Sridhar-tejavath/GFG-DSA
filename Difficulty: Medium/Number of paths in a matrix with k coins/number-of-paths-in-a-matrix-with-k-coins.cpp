class Solution {
  public:
  
    int solve(int row,int col,int k,vector<vector<int>>& mat,vector<vector<vector<int>>> &dp){
        
        int n=mat.size();
        int m=mat[0].size();
        
        if(row>=n || col>=m) return 0;
        
        if(mat[row][col]>k) return 0;
        
        if(dp[row][col][k]!=-1){
            return dp[row][col][k];
        }
        
        int remaining=k-mat[row][col];
        
        if(row==n-1 && col==m-1){
            if(remaining==0){
                return dp[row][col][k]=1;
            }
            return dp[row][col][k]=0;
        }
        
        int down=solve(row+1,col,remaining,mat,dp);
        int right=solve(row,col+1,remaining,mat,dp);
        
        return dp[row][col][k]=down+right;
        
    }
    
    int numberOfPath(vector<vector<int>>& mat, int k) {
        // Code Here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(k+1,-1)));
        
        return solve(0,0,k,mat,dp);
    }
};