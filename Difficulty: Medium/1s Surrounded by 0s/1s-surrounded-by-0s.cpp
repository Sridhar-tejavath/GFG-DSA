class Solution {
  public:
    int cntOnes(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            if(grid[i][0]==1){
                q.push({i,0});
            }
            if(grid[i][m-1]==1){
                q.push({i,m-1});
            }
        }
        
        for(int j=0;j<m;j++){
            if(grid[0][j]==1){
                q.push({0,j});
            }
            if(grid[n-1][j]==1){
                q.push({n-1,j});
            }
        }
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            
            int row=curr.first;
            int col=curr.second;
            
            grid[row][col]=0;
            
            for(int i=0;i<4;i++){
                
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && grid[newRow][newCol]==1){
                    q.push({newRow,newCol});
                }
            }
        }
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    count++;
                }
            }
        }
        
        return count;
    }
};