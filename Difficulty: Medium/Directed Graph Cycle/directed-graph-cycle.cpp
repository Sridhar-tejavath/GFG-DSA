class Solution {
  public:
  
    bool dfs(int node,vector<int> &visited,vector<int> &path,vector<vector<int>> &adj){
        
        visited[node]=1;
        path[node]=1;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                if(dfs(it,visited,path,adj)){
                    return true;
                }
            }
            else if(path[it]){
                return true;
            }
        }
        
        path[node]=0;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
        }
        
        vector<int> visited(V,0);
        vector<int> path(V);
        
        for(int i=0;i<V;i++){
            
            if(!visited[i]){
                if(dfs(i,visited,path,adj)){
                    return true;
                }
            }
        }
        
        return false;
    }
};