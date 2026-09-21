class Solution {
  public:
    int minOperations(vector<int>& arr) {
        // code here
        priority_queue<double> pq;
        double sum=0;
        
        for(int x:arr){
            pq.push(x);
            sum += x;
        }
        
        double target=sum/2;
        int operations=0;
        
        while(sum>target){
            double largest=pq.top();
            pq.pop();
            
            double half=largest/2.0;
            
            sum -= half;
            pq.push(half);
            
            operations++;
        }
        
        return operations;
    }
};