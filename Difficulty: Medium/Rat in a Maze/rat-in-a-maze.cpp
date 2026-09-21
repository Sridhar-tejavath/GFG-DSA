class Solution {
  public:
  
  
    void dfs(int row,int col,vector<vector<int>> &maze,vector<vector<int>> &visited,string path,vector<string> &ans){
        
        int n=maze.size();
        
        if(row==n-1 && col==n-1){
            ans.push_back(path);
            return;
        }
        
        int dr[]={1,0,0,-1};
        int dc[]={0,-1,1,0};
        string dir="DLRU";
        
        for(int i=0;i<4;i++){
            int newRow=row+dr[i];
            int newCol=col+dc[i];
            
            if(newRow>=0 && newRow<n && newCol>=0 && newCol<n && !visited[newRow][newCol] && maze[newRow][newCol]==1){
                visited[newRow][newCol]=1;
                dfs(newRow,newCol,maze,visited,path+dir[i],ans);
                
                visited[newRow][newCol]=0;//backtrack
            }
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        // code here
        int n=maze.size();
        vector<string> ans;
        
        if(n==0 || maze[0][0]==0 || maze[n-1][n-1]==0) return ans;
        
        vector<vector<int>> visited(n,vector<int> (n,0));
        
        visited[0][0]=1;
        
        dfs(0,0,maze,visited,"",ans);
        
        return ans;
        
    }
};