class Solution {
  public:
    int minCost(vector<int>& arr) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        int ans=0;
        
        for(int x:arr){
            pq.push(x);
        }
        
        while(pq.size()>1){
            int first=pq.top();
            pq.pop();
            int second=pq.top();
            pq.pop();
            
            int sum=first+second;
            
            ans += sum;
            
            pq.push(sum);
        }
        
        return ans;
    }
};