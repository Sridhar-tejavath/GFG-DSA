class Solution {
  public:
    vector<double> getMedian(vector<int> &arr) {
        // code here
        
        vector<double> ans;
        priority_queue<int> left;   // max heap for left side
        priority_queue<int,vector<int>,greater<int>> right;  // min heap for right side
        
        for(int x : arr){
            
            if(left.empty() || x<=left.top()){
                left.push(x);
            }
            else {
                right.push(x);
            }
            
            if(left.size() > right.size()+1){
                right.push(left.top());
                left.pop();
            }
            else if(right.size() > left.size()){
                left.push(right.top());
                right.pop();
            }
            
            if(left.size()==right.size()){
                double med=(left.top() + right.top())/2.0;
                ans.push_back(med);
            }
            else{
                ans.push_back(left.top());
            }
        }
        
        return ans;
    }
};
