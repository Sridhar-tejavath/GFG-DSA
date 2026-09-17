class Solution {
  public:
    int minimumCoins(vector<int>& arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
        vector<int> prefix(n+1,0);
        
        for(int i=0;i<n;i++){
            prefix[i+1]=prefix[i]+arr[i];
        }
        
        long long ans=LLONG_MAX;
        
        for(int i=0;i<n;i++){
            
            int minPile=arr[i];
            int maxPile=minPile+k;
            
            long long remove=prefix[i];
            
            int pos=upper_bound(arr.begin()+i+1,arr.end(),maxPile)-arr.begin();
            
            long long sum=prefix[n]-prefix[pos];
            
            long long count=n-pos;
            
            remove += sum-count*maxPile;
            
            ans=min(remove,ans);
        }
        return ans;
    }
};
