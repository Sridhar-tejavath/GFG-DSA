class Solution {
  public:
  
    bool dfs(int node,int parent,vector<int> &visited,vector<vector<int>> &adj){
        
        visited[node]=1;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                if(dfs(it,node,visited,adj)){
                    return true;
                }
            }
            else if(it!=parent){
                return true;
            }
        }
        return false;
    }
    
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
               if(dfs(i,-1,visited,adj)){
                  return true;
               }
            }
        }
        return false;
    }
};