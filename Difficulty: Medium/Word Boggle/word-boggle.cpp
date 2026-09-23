class Solution {
  public:
  
  
    bool dfs(vector<vector<char>>& board,string &word,int row,int col,int index,vector<vector<bool>> &visited){
        
        int n=board.size();
        int m=board[0].size();
        
        if(index==word.size()) return true;
        
        if(row<0 || col<0 || row>=n || col>=m || visited[row][col] || board[row][col]!=word[index])
            return false;

        
        int dr[]={-1,-1,-1,0,0,1,1,1};
        int dc[]={-1,0,1,-1,1,-1,0,1};
        
        visited[row][col]=true;
        
        for(int k=0;k<8;k++){
            
            int newRow=row+dr[k];
            int newCol=col+dc[k];
            
            if(dfs(board,word,newRow,newCol,index+1,visited)){
                
                visited[row][col]=false;
                return true;
            }
        }
        
        visited[row][col]=false;
        return false;
        
    }
    vector<string> wordBoggle(vector<vector<char>>& board, vector<string>& dictionary) {
        // Code here
        int n=board.size();
        int m=board[0].size();
        
        vector<string> ans;
        for(string &word:dictionary){
            
            bool found=false;
            
            vector<vector<bool>> visited(n,vector<bool>(m,false));
            
            for(int i=0;i<n && !found;i++){
                for(int j=0;j<m && !found;j++){
                    if(board[i][j]==word[0]){
                        if(dfs(board,word,i,j,0,visited)){
                            found=true;
                        }
                    }
                }
            }
            
            if(found){
                ans.push_back(word);
            }
        }
        
        return ans;
    }
};