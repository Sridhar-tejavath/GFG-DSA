class Solution {
  public:
  
    void depth(int node,vector<int> &visited,vector<int> &ans,vector<vector<int>> &adj){
        
        ans.push_back(node);
        visited[node]=1;
        
        for(auto it:adj[node]){
            if(!visited[it]){
                visited[it]=1;
                depth(it,visited,ans,adj);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int n=adj.size();
        vector<int> ans;
        vector<int> visited(n,0);
        
        depth(0,visited,ans,adj);
        
        return ans;
    }
};