class Solution {
  public:
    vector<int> modifyArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]!=0 && arr[i]==arr[i+1]){
                arr[i]=2*arr[i];
                arr[i+1]=0;
            }
        }
        
        int j=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
        return arr;
    }
};
