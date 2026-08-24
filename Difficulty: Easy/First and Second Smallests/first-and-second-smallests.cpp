class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // code here
        int smallest=INT_MAX;
        int Second=INT_MAX;
        for(int i=0;i<arr.size();i++){
            if(arr[i]<smallest){
                smallest=arr[i];
            }
        }
        for(int i=0;i<arr.size();i++){
            if(arr[i]<Second && arr[i]!=smallest){
                Second=arr[i];
            }
        }
        if(smallest==INT_MAX || Second==INT_MAX) return {-1};
        return {smallest,Second};
    }
};