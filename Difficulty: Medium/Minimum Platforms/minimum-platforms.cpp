class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        int n=arr.size();
        
        sort(arr.begin(),arr.end());
        sort(dep.begin(),dep.end());
        
        int i=0;
        int j=0;
        int platforms=0;
        int ans=0;
        while(i<n && j<n){
            if(arr[i]<=dep[j]){
                platforms++;
                i++;
                
                ans=max(ans,platforms);
            }
            else{
                platforms--;
                j++;
            }
        }
        
        return ans;
    }
};
