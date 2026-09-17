class Solution {
  public:
  
   vector<vector<int>> mergeOverlap(vector<vector<int>> intervals){
       
       sort(intervals.begin(),intervals.end());
       vector<vector<int>> res;
       res.push_back(intervals[0]);
       
       for(int i=1;i<intervals.size();i++){
           vector<int> curr=intervals[i];
           
           if(curr[0]<=res.back()[1]){
               res.back()[1]=max(curr[1],res.back()[1]);
           }
           else{
               res.push_back(curr);
           }
       }
       
       return res;
   }
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
        // code here
        intervals.push_back(newInterval);
        return mergeOverlap(intervals);
    }
};