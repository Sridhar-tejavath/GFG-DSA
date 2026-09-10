class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        
        vector<vector<int>> distance(n,vector<int>(m,-1));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    distance[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            int row=curr.first;
            int col=curr.second;
            
            for(int i=0;i<4;i++){
                
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && distance[newRow][newCol]==-1){
                    distance[newRow][newCol]=distance[row][col]+1;
                    q.push({newRow,newCol});
                }
            }
        }
        
        return distance;
    }
};