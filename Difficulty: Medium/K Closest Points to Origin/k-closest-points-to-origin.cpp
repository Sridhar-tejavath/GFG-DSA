class Solution {
  public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        // code here
        priority_queue<pair<int,pair<int,int>>> pq;
        
        for(auto &p:points){
            
            int x=p[0];
            int y=p[1];
            
            int distance=x*x + y*y;
            
            pq.push({distance,{x,y}});
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        vector<vector<int>> ans;
        while(!pq.empty()){
            ans.push_back({pq.top().second.first,pq.top().second.second});
            pq.pop();
        }
        
        return ans;
    }
};