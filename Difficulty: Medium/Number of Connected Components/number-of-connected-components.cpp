class Solution {
  public:
  
    void bfs(int node,vector<int> &visited,vector<vector<int>> &adj){
        
        queue<int> q;
        q.push(node);
        visited[node]=1;
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            for(auto it:adj[curr]){
                
                if(!visited[it]){
                    visited[it]=1;
                    q.push({it});
                }
            }
        }
    }
    
    int countConnected(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        
        int connected=0;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                bfs(i,visited,adj);
                connected++;
            }
        }
        return connected;
    }
};