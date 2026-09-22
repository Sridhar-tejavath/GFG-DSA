class Solution {
  public:
  
    
    bool solve(int i,int j,int k,vector<vector<char>> &mat, string &word){
        
        if(k==word.size()) return true;
        
        if(i<0 || j<0 || i>=mat.size() || j>=mat[0].size() || mat[i][j]!=word[k]){
            return false;
        }
        char ch=mat[i][j];
        mat[i][j]='#';
        
        int dr[]={1,-1,0,0};
        int dc[]={0,0,1,-1};
        
        for(int d=0;d<4;d++){
            int newRow=i+dr[d];
            int newCol=j+dc[d];
            
            if(solve(newRow,newCol,k+1,mat,word)){
                mat[i][j]=ch;
                return true;
            }
        }
        
        mat[i][j]=ch;
        return false;
    }
    bool isWordExist(vector<vector<char>> &mat, string &word) {
        // Code here
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[0].size();j++){
                if(mat[i][j]==word[0]){
                    if(solve(i,j,0,mat,word)){
                        return true;
                    }
                }
            }
        }
        
        return false;
    }
};