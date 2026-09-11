class Solution {
  public:
    vector<int> minHeightRoot(int V, vector<vector<int>>& edges) {
        // Code here
        if(V==1) return {0};
        
        vector<vector<int>> adj(V);
        vector<int> Indegree(V);
        
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
            Indegree[u]++;
            Indegree[v]++;
        }
        
        queue<int> q;
        for(int i=0;i<V;i++){
            if(Indegree[i]==1){
                q.push(i);
            }
        }
        
        int remaining=V;
        while(remaining > 2){
            
            int size=q.size();
            
            remaining -= size;
            
            while(size--){
                int node=q.front();
                q.pop();
                
                for(int it:adj[node]){
                    Indegree[it]--;
                    
                    if(Indegree[it]==1){
                        q.push({it});
                    }
                }
            }
        }
        
        vector<int> ans;
        while(!q.empty()){
            ans.push_back(q.front());
            q.pop();
        }
        
        return ans;
    }
};