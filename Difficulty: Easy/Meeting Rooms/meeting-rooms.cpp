class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        vector<pair<int,int>> meetings;
        for(int i=0;i<arr.size();i++){
            meetings.push_back({arr[i][1],arr[i][0]});
        }
        
        sort(meetings.begin(),meetings.end());
        
        int lastEnd=-1;
        for(auto &meet:meetings){
            
            int endTime=meet.first;
            int startTime=meet.second;
            
            if(startTime>=lastEnd){
                lastEnd=endTime;
            }
            else{
                return false;
            }
        }
        
        return true;
    }
};