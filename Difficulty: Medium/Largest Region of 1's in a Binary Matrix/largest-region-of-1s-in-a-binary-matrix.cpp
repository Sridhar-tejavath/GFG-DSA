class Solution {
  public:
    int largestRegion(vector<vector<int>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    visited[i][j]=1;
                    q.push({i,j});
                    int count=0;
                    int dr[]={-1,-1,-1,0,1,1,1,0};
                    int dc[]={-1,0,1,1,1,0,-1,-1};
        
                    while(!q.empty()){
            
                        auto curr=q.front();
                        q.pop();
            
                        int row=curr.first;
                        int col=curr.second;
            
                        count++;
            
                        for(int i=0;i<8;i++){
                
                          int newRow=row+dr[i];
                          int newCol=col+dc[i];
                 
                          if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && !visited[newRow][newCol] && grid[newRow][newCol]==1){
                              visited[newRow][newCol]=1;
                              q.push({newRow,newCol});
                            }
                        }
                    }
                    
                    ans=max(count,ans);
                }
            }
        }
        return ans;
    }
};