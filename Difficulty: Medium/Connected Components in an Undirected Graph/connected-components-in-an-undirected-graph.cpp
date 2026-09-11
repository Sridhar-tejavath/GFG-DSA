class Solution {
  public:
  
    void bfs(int node,vector<int> &visited,vector<vector<int>> &adj,vector<int> &result){
        
        queue<int> q;
        q.push(node);
        visited[node]=1;
        
        
        while(!q.empty()){
            
            auto curr=q.front();
            q.pop();
            
            result.push_back(curr);
            
            for(auto it:adj[curr]){
            
              if(!visited[it]){
                  visited[it]=1;
                  q.push(it);
                }
            }
        }
    }
    vector<vector<int>> getComponents(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> ans;
        
        vector<int> visited(V,0);
        
        vector<vector<int>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                vector<int> result;
                bfs(i,visited,adj,result);
                
                sort(result.begin(),result.end());
                ans.push_back(result);
            }
        }
        
        return ans;
    }
};
