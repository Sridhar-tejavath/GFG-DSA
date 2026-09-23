class Solution {
  public:
  
    void solve(int start,int target,vector<int> &arr,vector<vector<int>> &ans,vector<int> &path){
        
        if(target==0){
            ans.push_back(path);
            return ;
        }
        
        for(int i=start;i<arr.size();i++){
            
            
            if(i>start && arr[i]==arr[i-1]){
                continue;
            }
            
            if(arr[i]>target){
                continue;
            }
            
            path.push_back(arr[i]);
            solve(i+1,target-arr[i],arr,ans,path);
            
            path.pop_back();
        }
    }
    vector<vector<int>> uniqueCombinations(vector<int> &arr, int target) {
        // code here
        vector<vector<int>> ans;
        
        vector<int> path;
        
        sort(arr.begin(),arr.end());
        solve(0,target,arr,ans,path);
        
        return ans;
    }
};