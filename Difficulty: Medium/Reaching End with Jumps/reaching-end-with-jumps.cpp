class Solution {
  public:
    bool canReach(vector<int> &arr) {
        // code here
        int farthest=0;
        
        for(int i=0;i<arr.size();i++){
            
            if(i>farthest) return false;
            
            farthest=max(farthest,i+arr[i]);
            
            if(farthest>=arr.size()-1) return true;
        }
        
        return false;
    }
};
