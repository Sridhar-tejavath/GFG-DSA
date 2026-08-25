class Solution {
  public:
    vector<int> findKClosest(vector<int> arr, int k, int x) {
        // Code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        vector<int> ans;
        int pos=0;
        while(pos<n && arr[pos]<x){
            pos++;
        }
        
        int left=pos-1;
        int right=pos;
        
        if(right<n && arr[right]==x){
            right++;
        }
        
        while(k--){
            if(left<0){
                ans.push_back(arr[right]);
                right++;
            }
            else if(right>=n){
                ans.push_back(arr[left]);
                left--;
            }
            else if(abs(arr[left]-x)<abs(arr[right]-x)){
                ans.push_back(arr[left]);
                left--;
                
            }
            else{
                ans.push_back(arr[right]);
                right++;
            }
        }
        return ans;
    }
};