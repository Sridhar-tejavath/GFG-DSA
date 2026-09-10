class Solution {
  public:
    bool isPossible(int n, vector<pair<int, int>>& pre) {
        // code here
        vector<vector<int>> adj(n);
        vector<int> Indegree(n,0);

        for(auto &e:pre){
            adj[e.second].push_back(e.first);
            Indegree[e.first]++;
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

        if(ans.size()!=n) return false;;

        return true;
    }
};