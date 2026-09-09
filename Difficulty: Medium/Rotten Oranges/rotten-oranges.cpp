class Solution {
  public:
    int orangesRot(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        int fresh=0;
        queue<pair<pair<int,int>,int>> q;
        
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==2){
                    q.push({{i,j},0});
                }
                if(mat[i][j]==1){
                    fresh++;
                }
            }
        }
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        int time=0;
        
        while(!q.empty()){
            
            auto it=q.front();
            
            int row=it.first.first;
            int col=it.first.second;
            int t=it.second;
            
            q.pop();
            
            time=max(t,time);
            
            for(int k=0;k<4;k++){
                
                int newRow=row+dr[k];
                int newCol=col+dc[k];
                
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && mat[newRow][newCol]==1){
                    mat[newRow][newCol]=2;
                    q.push({{newRow,newCol},time+1});
                    fresh--;
                }
            }
        }
        
        if(fresh==0) return time;
        return -1;
    }
};