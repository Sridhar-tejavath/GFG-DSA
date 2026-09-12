class Solution {
  public:
  
  
    void dfs(int u,vector<vector<int>> &adj,vector<vector<int>> &ans,vector<int> &tin,vector<int> &low,vector<bool> &inStack,stack<int> &st,int &timer){
        
        tin[u]=low[u]=timer++;
        st.push(u);
        inStack[u]=true;
        
        for(auto v:adj[u]){
            if(tin[v]==-1){
                dfs(v,adj,ans,tin,low,inStack,st,timer);
                low[u]=min(low[u],low[v]);
            }
            else if(inStack[v]){
                low[u]=min(low[u],tin[v]);
            }
        }
        
        if(low[u]==tin[u]){
            vector<int> components;
            
            while(true){
                int v=st.top();
                st.pop();
                
                inStack[v]=false;
                
                components.push_back(v);
                
                if(v==u) break;
                
            }
            
            sort(components.begin(),components.end());
            ans.push_back(components);
        }
    }
    vector<vector<int>> tarjans(int V, vector<vector<int>>& adj) {
        // code here
        vector<vector<int>> ans;
        
        vector<int> tin(V,-1);
        vector<int> low(V,-1);
        
        vector<bool> inStack(V,false);
        stack<int> st;
        int timer=0;
        
        for(int i=0;i<V;i++){
            if(tin[i]==-1){
                dfs(i,adj,ans,tin,low,inStack,st,timer);
            }
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};