class Solution {
  public:
    int minJumps(vector<int>& arr) {
        // code here
        int n=arr.size();
        
        if(arr[0]==0) return -1;
        
        if(n<1) return -1;
        
        int jumps=0;
        int currentEnd=0;
        int farthest=0;
        
        for(int i=0;i<n-1;i++){
            
            farthest=max(farthest,i+arr[i]);
            
            if(i==currentEnd){
                
                if(farthest==currentEnd){
                    return -1;
                }
                jumps++;
                currentEnd=farthest;
            }
        }
        
        return jumps;
    }
};
