class Solution {
  public:
    bool hasNearbyPair(vector<int>& arr, int idxDiff, int valDiff) {
        // code here
        multiset<long long> st;
        
        for(int i=0;i<arr.size();i++){
            
            if(i>idxDiff){
                st.erase(st.find(arr[i-idxDiff-1]));
            }
            
            auto it=st.lower_bound((long long) arr[i]-valDiff);
            
            if(it!=st.end() && *it<=(long long)arr[i]+valDiff){
                return true;
            }
            st.insert(arr[i]);
        }
        
        return false;
    }
};