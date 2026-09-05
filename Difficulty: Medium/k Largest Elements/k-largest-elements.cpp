class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        // code here
        priority_queue<int> pq;
        
        vector<int> ans;
        
        for(int x : arr){
            pq.push(x);
        }
        
        while(k--){
            ans.push_back(pq.top());
            pq.pop();
        }
        
        return ans;
    }
};