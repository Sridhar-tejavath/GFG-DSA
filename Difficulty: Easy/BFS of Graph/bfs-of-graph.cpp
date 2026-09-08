class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n=adj.size();
        vector<int> ans;
        queue<int> q;
        vector<int> visited(n,0);
        q.push(0);
        visited[0]=1;
        
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            
            ans.push_back(curr);
            for(auto it: adj[curr]){
                if(!visited[it]){
                   visited[it]=1;
                   q.push(it);
                }
            }
        }
        
        return ans;
    }
};