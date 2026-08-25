class Solution {
  public:
    void nextPermutation(vector<int>& arr) {
        // code here
        int j=-1;
        int n=arr.size();
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                j=i;
                break;
            }
        }
        if(j==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        
        for(int i=n-1;i>=j;i--){
            if(arr[i]>arr[j]){
                swap(arr[j],arr[i]);
                break;
            }
        }
        reverse(arr.begin()+j+1,arr.end());
        
    }  
};