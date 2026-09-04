class Solution {
  public:
    bool canRepresentBST(vector<int> &arr) {
        // code here
        stack<int> st;
        int root=INT_MIN;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<root){
                return false;
            }
            
            while(!st.empty() && st.top()<arr[i]){
                root=st.top();
                st.pop();
            }
            st.push(arr[i]);
        }
        
        return true;
    }
};