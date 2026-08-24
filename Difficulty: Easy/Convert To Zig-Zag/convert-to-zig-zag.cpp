class Solution {
  public:
    void zigZag(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size()-1;i++){
            if(i%2==0){
                if(arr[i]>arr[i+1]){
                    swap(arr[i],arr[i+1]);
                }
                }
                else{
                    if(arr[i]<arr[i+1]){
                        swap(arr[i],arr[i+1]);
                    }
            }
        }
    }
};
