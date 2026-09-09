class Solution {
  public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // code here
        int n=image.size();
        int m=image[0].size();
        int oldColor=image[sr][sc];
        if(oldColor==newColor) return image;
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> q;
        visited[sr][sc]=1;
        q.push({sr,sc});
        
        
        int dr[]={-1,0,1,0};
        int dc[]={0,-1,0,1};
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            int row=curr.first;
            int col=curr.second;
            
            image[row][col]=newColor;
            
            for(int i=0;i<4;i++){
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && !visited[newRow][newCol] && image[newRow][newCol]==oldColor){
                    visited[newRow][newCol]=1;
                    q.push({newRow,newCol});
                    image[newRow][newCol]=newColor;
                }
            }
        }
        return image;
    }
};