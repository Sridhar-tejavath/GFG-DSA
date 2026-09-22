class Solution {
  public:
  
    bool isSafe(int node,int col,vector<int> &Color,vector<vector<int>> &adj){
        
        for(int it:adj[node]){
            if(Color[it]==col){
                return false;
            }
        }
        return true;
    }
    
    bool solve(int node,int v,int m,vector<vector<int>> &adj,vector<int> &Color){
        
        if(node==v) return true;
        
        for(int col=1;col<=m;col++){
            
            if(isSafe(node,col,Color,adj)){
                
                Color[node]=col;
                
                if(solve(node+1,v,m,adj,Color)){
                    return true;
                }
                
                Color[node]=0;
            }
        }
        return false;
    }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>> adj(v);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(v,0);
        
        vector<int> Color(v,-1);
        
        return solve(0,v,m,adj,Color);
    
    }
};