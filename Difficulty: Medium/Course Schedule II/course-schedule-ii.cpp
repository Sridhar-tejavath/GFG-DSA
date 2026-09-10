class Solution {
  public:
    vector<int> findOrder(int n, vector<vector<int>> &prerequisites) {
        // code here
        vector<vector<int>> adj(n);
        vector<int> Indegree(n,0);
        
        for(auto &e:prerequisites){
            
            int u=e[0];
            int v=e[1];
            
            adj[v].push_back(u);
            Indegree[u]++;
        }
        
        queue<int> q;
        for(int i=0;i<n;i++){
            if(Indegree[i]==0){
                q.push(i);
            }
        }
        
        vector<int> ans;
        
        while(!q.empty()){
            
            int node=q.front();
            q.pop();
            
            ans.push_back(node);
            
            for(auto it:adj[node]){
                Indegree[it]--;
                
                if(Indegree[it]==0){
                    q.push(it);
                }
            }
        }
        
        if(ans.size()!=n) return {};
        
        return ans;
    }
};