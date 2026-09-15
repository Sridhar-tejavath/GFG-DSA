class Solution {
  public:
    int toyCount(vector<int>& arr, int k) {
        // code here
        int count=0;
        sort(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(k>=arr[i]){
                count++;
                k -= arr[i];
            }
        }
        
        return count;
    }
};