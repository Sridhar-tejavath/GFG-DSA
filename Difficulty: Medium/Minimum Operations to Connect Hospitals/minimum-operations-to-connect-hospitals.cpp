class Solution {
  public:
  
    void dfs(int node,vector<int> &visited,vector<vector<int>> &adj){
        
        visited[node]=1;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                dfs(it,visited,adj);
            }
        }
    }
    int minConnect(int V, vector<vector<int>>& edges) {
        // Code here
        if(edges.size()<V-1) return -1;
        
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        
        int components=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                components++;
                dfs(i,visited,adj);
            }
        }
        
        return components-1;
    }
};
