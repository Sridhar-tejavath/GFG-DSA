class Solution {
  public:
  
  
    void dfs(int node,int parent,vector<vector<int>> &adj,vector<int> &tin,vector<int> &low,vector<int> &visited,int &timer,int c,int d,bool &isBridge){
        
        visited[node]=1;
        tin[node]=low[node]=timer++;
        
        for(auto adjNode:adj[node]){
            
            if(adjNode==parent){
                continue;
            }
            
            if(!visited[adjNode]){
                dfs(adjNode,node,adj,tin,low,visited,timer,c,d,isBridge);
                low[node]=min(low[adjNode],low[node]);
                
                if((node==c && adjNode==d) || (node==d && adjNode==c)){
                    if(low[adjNode]>tin[node]){
                        isBridge=true;
                    }
                }
            }
            
            else{
                   low[node]=min(low[node],tin[adjNode]);
                }
        }
    }
    bool isBridge(int V, vector<vector<int>> &edges, int c, int d) {
        // Code here
        vector<vector<int>> adj(V);
        
        for(auto &e:edges){
            
            int u=e[0];
            int v=e[1];
            
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> visited(V,0);
        vector<int> tin(V,0);
        vector<int> low(V,0);
        
        int timer=0;
        bool isBridge=false;
        
        for(int i=0;i<V;i++){
            if(!visited[i]){
                dfs(i,-1,adj,tin,low,visited,timer,c,d,isBridge);
            }
        }
        return isBridge;
    }
};