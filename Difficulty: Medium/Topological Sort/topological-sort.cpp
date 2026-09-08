class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
        }
        
        vector<int> Indegree(V,0);
        
        for(int i=0;i<V;i++){
            for(auto it:adj[i]){
                Indegree[it]++;
            }
        }
        
        queue<int> q;
        for(int i=0;i<V;i++){
            if(Indegree[i]==0){
                q.push(i);
            }
        }
        
        vector<int> toposort;
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            toposort.push_back(curr);
            
            for(auto it:adj[curr]){
                Indegree[it]--;
                
                if(Indegree[it]==0){
                    q.push(it);
                }
            }
        }
        
        return toposort;
    }
};