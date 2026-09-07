class Solution {
  public:
    int minComputation(vector<int> &files) {
        // code here
        priority_queue<int,vector<int>,greater<int>> pq;
        for( int x:files){
            pq.push(x);
        }
        
        int sum =0;
        while(pq.size()>1){
            
            int x=pq.top();
            pq.pop();
            
            int y=pq.top();
            pq.pop();
            
            int cost= x+y;
            
            sum += cost;
            
            pq.push(cost);
        }
        
        return sum;
    }
};