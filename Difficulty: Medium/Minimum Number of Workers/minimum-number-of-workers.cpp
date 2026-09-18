class Solution {
  public:
    int minMen(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        
        vector<int> best(n,-1);
        
        for(int i=0;i<n;i++){
            if(arr[i]==-1) continue;
            
            int left=max(0,i-arr[i]);
            int right=min(n-1,i+arr[i]);
            
            best[left]=max(best[left],right);
        }
        
        int men=0;
        int current=0;
        int farthest=-1;
        int j=0;
        
        while(current<n){
            while(j<=current && j<n){
                farthest=max(farthest,best[j]);
                j++;
            }
            
            if(farthest<current)
               return -1;
            
            men++;
            
            if(farthest>=n-1) return men;
            
            current=farthest+1;
        }
        return men;
    }
};