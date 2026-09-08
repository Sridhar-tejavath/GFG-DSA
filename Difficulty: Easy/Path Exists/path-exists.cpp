class Solution {
  public:
  
    bool dfs(int node,vector<int> &visited,vector<vector<int>> &adj,int dest){
        
        visited[node]=1;
        
        if(node==dest) return true;
        
        for(auto it:adj[node]){
            
            if(!visited[it]){
                visited[it]=1;
                if(dfs(it,visited,adj,dest)) return true;
            }
        }
        
        return false;
        
    }
    bool checkPath(int V, vector<vector<int>>& edges, int src, int dest) {
        // Code here
        if(src==dest) return true;
        
        vector<int> visited(V,0);
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
       return dfs(src,visited,adj,dest);
    }
};
