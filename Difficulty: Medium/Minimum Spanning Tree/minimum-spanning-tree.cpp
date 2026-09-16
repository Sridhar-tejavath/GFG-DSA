class Solution {
  public:
    int spanningTree(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<pair<int,int>>> adj(V);
        for(auto &e:edges){
            int u=e[0];
            int v=e[1];
            int w=e[2];
            
            adj[u].push_back({v,w});
            adj[v].push_back({u,w});
        }
        
        set<pair<int,int>> st;
        vector<int> visited(V,0);
        
        st.insert({0,0});
        
        int mstWeight=0;
        while(!st.empty()){
            
            auto curr=*st.begin();
            st.erase(st.begin());
            
            int weight=curr.first;
            int node=curr.second;
            
            
            if(visited[node]) continue;
            
            visited[node]=1;
            mstWeight += weight;
            for(auto it:adj[node]){
                int adjNode=it.first;
                int adjWei=it.second;
                
                if(!visited[adjNode]){
                    st.insert({adjWei,adjNode});
                }
            }
        }
        
        return mstWeight;
    }
};