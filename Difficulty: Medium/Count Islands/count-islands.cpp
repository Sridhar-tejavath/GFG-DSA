class Solution {
  public:
  
  
    void bfs(int row,int col,vector<vector<int>> &visited,vector<vector<char>> &grid){
        
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>> q;
        visited[row][col]=1;
        q.push({row,col});
        
        
        int dr[]={-1,-1,-1,0,1,1,1,0};
        int dc[]={-1,0,1,1,1,0,-1,-1};
        
        while(!q.empty()){
            
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            
            for(int i=0;i<8;i++){
                int newRow=r+dr[i];
                int newCol=c+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && !visited[newRow][newCol] && grid[newRow][newCol]=='L'){
                    visited[newRow][newCol]=1;
                    q.push({newRow,newCol});
                }
            }
            
        }
    }
    int countIslands(vector<vector<char>>& grid) {
        // Code here
        int n=grid.size();
        int m=grid[0].size();
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='L'){
                    count++;
                    bfs(i,j,visited,grid);
                }
            }
        }
        
        return count;
    }
};