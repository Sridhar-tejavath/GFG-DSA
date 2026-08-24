class Solution {
  public:
    int minDist(vector<int>& arr, int x, int y) {
        // code here
        int minDist=INT_MAX;
        int prev=-1;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==x || arr[i]==y){
                if(prev!=-1 && arr[i]!=arr[prev]){
                    minDist=min(minDist,i-prev);
                }
                prev=i;
            }
        }
        if(minDist==INT_MAX) return -1;
        return minDist;
        
    }
};