class Solution {
  public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        // code here
        
        if(mat[src[0]][src[1]] == 0 || mat[dest[0]][dest[1]] == 0)
            return -1;
            
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>> distance(n,vector<int>(m,1e9));
        
        queue<pair<pair<int,int>,int>> q;
        distance[src[0]][src[1]]=0;
        q.push({{src[0],src[1]},0});
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            int row=curr.first.first;
            int col=curr.first.second;
            int dist=curr.second;
            
            if(dest[0]==row && dest[1]==col) return dist;
            
            for(int i=0;i<4;i++){
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m && dist+1 < distance[newRow][newCol] && mat[newRow][newCol]==1){
                    distance[newRow][newCol]=dist+1;
                    q.push({{newRow,newCol},dist+1});
                }
            }
        }
        
        return -1;
    }
};
