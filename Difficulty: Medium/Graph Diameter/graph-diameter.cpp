class Solution {
  public:
  
  
    pair<int,int> bfs(int start,int V,vector<vector<int>> &adj){
        
        vector<int> distance(V,-1);
        queue<int> q;
        
        q.push(start);
        distance[start]=0;
        
        int farthestNode=start;
        
        while(!q.empty()){
            
            int node=q.front();
            q.pop();
            
            for(auto it:adj[node]){
                if(distance[it]==-1){
                    distance[it]=distance[node]+1;
                    q.push(it);
                    
                    if(distance[it]>distance[farthestNode]){
                        farthestNode=it;
                    }
                }
            }
        }
        
        return {farthestNode,distance[farthestNode]};
    }
    int diameter(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        auto first=bfs(0,V,adj);
        
        int endpoint=first.first;
        
        auto second=bfs(endpoint,V,adj);
        
        return second.second;
    }
};
