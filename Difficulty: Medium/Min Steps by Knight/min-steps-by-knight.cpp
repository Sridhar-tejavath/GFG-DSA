class Solution {
  public:
    int minStepToReachTarget(vector<int>& knightPos, vector<int>& targetPos, int n) {
        // Code here
        vector<vector<int>> visited(n+1,vector<int>(n+1,0));
        queue<pair<int,int>> q;
        
        int sr=knightPos[0];
        int sc=knightPos[1];
        
        int tr=targetPos[0];
        int tc=targetPos[1];
        
        q.push({sr,sc});
        visited[sr][sc]=1;
        
        int dr[]={-2,-2,-1,-1,1,1,2,2};
        int dc[]={-1,1,-2,2,-2,2,-1,1};
        
        int steps=0;
        
        while(!q.empty()){
            
            int size=q.size();
            while(size--){
                auto curr=q.front();
                q.pop();
    
                int row=curr.first;
                int col=curr.second;
    
                if(row==tr && col==tc) return steps;
    
                 for(int i=0;i<8;i++){
                    int newRow=row+dr[i];
                    int newCol=col+dc[i];
        
                    if(newRow>=1 && newRow<=n && newCol>=1 && newCol<=n && !visited[newRow][newCol]){
                         visited[newRow][newCol]=1;
                         q.push({newRow,newCol});
                   }
                 }
            }
            steps++;
        }
        
        return -1;
    }
    
};