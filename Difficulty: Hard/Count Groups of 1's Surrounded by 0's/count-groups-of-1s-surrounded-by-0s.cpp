class Solution {
  public:
  
    void bfs(int row,int col,vector<vector<int>> &mat){
        
        int n=mat.size();
        int m=mat[0].size();
        
        queue<pair<int,int>> q;
        q.push({row,col});
        mat[row][col]=0;
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        while(!q.empty()){
            
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            
            for(int i=0;i<4;i++){
                
                int newRow=r+dr[i];
                int newCol=c+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && mat[newRow][newCol]==1){
                    q.push({newRow,newCol});
                    mat[newRow][newCol]=0;
                }
            }
        }
    }
    int countGroups(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            if(mat[i][0]==1){
                bfs(i,0,mat);
            }
            if(mat[i][m-1]==1){
                bfs(i,m-1,mat);
            }
        }
        
        for(int j=0;j<m;j++){
            if(mat[0][j]==1){
                bfs(0,j,mat);
            }
            if(mat[n-1][j]==1){
               bfs(n-1,j,mat);
            }
        }
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==1){
                    ans++;
                    bfs(i,j,mat);
                }
            }
        }
        
        return ans;
    }
};