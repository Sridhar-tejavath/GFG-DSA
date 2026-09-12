class Solution {
  public:
  
    void dfs(int node,int parent,vector<vector<int>> &adj,vector<int> &tin,vector<int> &low,vector<vector<int>> &ans,int &timer){
        
        tin[node]=low[node]=timer++;
        
        for(int it:adj[node]){
            
            if(it==parent) continue;
            
            if(tin[it]!=-1){
                low[node]=min(low[node],tin[it]);
            }
            else{
                dfs(it,node,adj,tin,low,ans,timer);
                low[node]=min(low[node],low[it]);
            
                if(low[it]>tin[node]){
                   ans.push_back({node,it});
                }
            }
        }
    }
    vector<vector<int>> criticalConnections(int V, vector<vector<int>>& edges) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> tin(V,-1);
        vector<int> low(V,-1);
        vector<vector<int>> ans;
        
        int timer=0;
        
        for(int i=0;i<V;i++){
            if(tin[i]==-1){
                dfs(i,-1,adj,tin,low,ans,timer);
            }
        }
        
        return ans;
    }
};