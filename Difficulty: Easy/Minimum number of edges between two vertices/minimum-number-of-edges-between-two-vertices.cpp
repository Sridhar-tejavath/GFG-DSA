class Solution {
  public:
    int minEdges(int V, vector<vector<int>>& edges, int u, int v) {
        // code here
        
        if(u==v) return 0;
        
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        queue<pair<int,int>> q;
        q.push({u,0});
        visited[u]=1;
        
        while(!q.empty()){
            
            auto [curr,distance]=q.front();
            q.pop();
            
            if(curr==v){
                return distance;
            }
            
            for(auto it:adj[curr]){
                if(!visited[it]){
                    visited[it]=1;
                    q.push({it,distance+1});
                }
            }
        }
        return -1;
    }
};
