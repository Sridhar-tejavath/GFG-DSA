class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
        // Code here
        vector<pair<int,int>> adj[V];
        for(auto &e:edges){
            int a=e[0],b=e[1],c=e[2];
            adj[a].push_back({b,c});
            adj[b].push_back({a,c});
        }
        
        set<pair<int,int>> st;
        vector<int> distance(V,1e9);
        distance[src]=0;
        st.insert({0,src});
        
        while(!st.empty()){
            
            auto it=*st.begin();
            st.erase(it);
            
            int node=it.second;
            int currDist=it.first;
            
            for(auto neig:adj[node]){
                
                int adjneig=neig.first;
                int wt=neig.second;
                
                if(currDist + wt < distance[adjneig]){
                    if(distance[adjneig]!=1e9)
                       st.erase({distance[adjneig],adjneig});
                       
                    distance[adjneig]=currDist + wt;
                    st.insert({distance[adjneig],adjneig});
                }
            }
        }
        
        return distance;
    }
};