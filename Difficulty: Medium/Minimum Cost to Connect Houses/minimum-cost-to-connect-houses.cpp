class Solution {
  public:
    int minCost(vector<vector<int>>& houses) {
        // code here
        int n=houses.size();
        
        vector<int> visited(n,0);
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        pq.push({0,0});
        
        int totalCost=0;
        int count=0;
        
        while(!pq.empty() && count<n){
            
            int cost=pq.top().first;
            int u=pq.top().second;
            pq.pop();
            
            if(visited[u]) continue;
            
            visited[u]=1;
            count++;
            
            totalCost += cost;
            
            for(int v=0;v<n;v++){
                if(!visited[v]){
                    int newCost=abs(houses[u][0]-houses[v][0])+abs(houses[u][1]-houses[v][1]);
                    pq.push({newCost,v});
                }
            }
        }
        return totalCost;
    }
};