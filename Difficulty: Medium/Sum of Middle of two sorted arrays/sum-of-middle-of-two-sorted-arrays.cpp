class Solution {
  public:
    int findMidSum(vector<int> &arr1, vector<int> &arr2) {
        // code here
        vector<int> ans;
        int i=0;
        int j=0;
        
        while(i<arr1.size() && j<arr2.size()){
            
            if(arr1[i]<=arr2[j]){
                ans.push_back(arr1[i]);
                i++;
            }
            else{
                ans.push_back(arr2[j]);
                j++;
            }
        }
        
        while(i<arr1.size()){
            ans.push_back(arr1[i]);
            i++;
        }
        while(j<arr2.size()){
            ans.push_back(arr2[j]);
            j++;
        }
        
        int n=ans.size();
        if(n%2!=0) return ans[n/2];
        return ans[(n/2)-1]+ans[n/2];
    }
};