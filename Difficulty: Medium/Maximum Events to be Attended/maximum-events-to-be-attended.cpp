class Solution {
  public:
    int maxEvents(vector<int> &start, vector<int> &end) {
        // code here
        int n=start.size();
        vector<pair<int,int>> events;
        
        for(int i=0;i<n;i++){
            events.push_back({start[i],end[i]});
        }
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        sort(events.begin(),events.end());
        
        int i=0;
        int day=0;
        int ans=0;
        
        while(i<n || !pq.empty()){
            
            if(pq.empty()){
                day=max(day,events[i].first);
            }
            
            while(i<n && events[i].first<=day){
                pq.push(events[i].second);
                i++;
            }
            
            while(!pq.empty() && pq.top()<day){
                pq.pop();
            }
            
            if(!pq.empty()){
                pq.pop();
                ans++;
                day++;
            }
        }
        
        return ans;
    }
};