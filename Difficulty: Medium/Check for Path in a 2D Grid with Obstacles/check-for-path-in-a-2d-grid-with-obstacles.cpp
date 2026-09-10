class Solution {
  public:
    bool isPathPossible(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    q.push({i,j});
                    visited[i][j]=1;
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
            
            if(mat[row][col]==2) return true;
            for(int i=0;i<4;i++){
                
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(newRow>=0 && newCol>=0 && newRow<n && newCol<m && !visited[newRow][newCol] && (mat[newRow][newCol]==3 || mat[newRow][newCol]==2)){
                    visited[newRow][newCol]=1;
                    q.push({newRow,newCol});
                }
            }
        }
        
        return false;
    }
};