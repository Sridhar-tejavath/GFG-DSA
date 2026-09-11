class Solution {
  public:
    int countGroups(vector<vector<int>>& grid) {
        // code here
        int n=grid.size();
        int m=grid[0].size();
        
        int count=0;
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    q.push({i,j});
                
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
                           
                           if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && !visited[newRow][newCol] && grid[newRow][newCol]==1){
                               visited[newRow][newCol]=1;
                               q.push({newRow,newCol});
                           }
                       }
                   }
                   
                   count++;
                }
            }
        }
        
        return count;
    }
};