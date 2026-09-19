class Solution {
  public:
    int binarySearchable(vector<int>& arr) {
        // code here
        int count=0;
        function<void(int,int,long long,long long)> dfs=[&](int l,int r,long long low,long long high){
            
            if(l>r) return;
            
            int mid=l+(r-l)/2;
            long long val=arr[mid];
            
            if(val>low && val<high) count++;
            
            dfs(l,mid-1,low,min(high,val));
            
            dfs(mid+1,r,max(low,val),high);
        };
        
        dfs(0,arr.size()-1,LLONG_MIN,LLONG_MAX);
        
        return count;
    }
};