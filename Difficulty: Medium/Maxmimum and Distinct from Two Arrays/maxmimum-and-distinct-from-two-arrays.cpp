class Solution {
  public:
    vector<int> maximizeArray(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        
        priority_queue<int> pq;
        unordered_set<int> st;
        
        for(int x: a){
            st.insert(x);
        }
        
        for(int x: b){
            st.insert(x);
        }
        
        for(int x: st){
            pq.push(x);
        }
        
        unordered_set<int> selected;
     
        for(int i=0;i<n;i++){
            selected.insert(pq.top());
            pq.pop();
        }
        
        vector<int> ans;
        for(int x:b){
            if(selected.count(x)){
                ans.push_back(x);
                selected.erase(x);
            }
        }
        
        for(int x:a){
            if(selected.count(x)){
                ans.push_back(x);
                selected.erase(x);
            }
        }
        
        return ans;
    }
};