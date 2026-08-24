class Solution {
  public:
    vector<int> distDigit(vector<int>& arr) {
        // Code here
        set<int> st;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
               string s=to_string(arr[i]);
               for(int j=0;j<s.size();j++){
                    st.insert(s[j]-'0');
                }
            }
        }
        
        return vector<int>(st.begin(),st.end());
        
    }
};