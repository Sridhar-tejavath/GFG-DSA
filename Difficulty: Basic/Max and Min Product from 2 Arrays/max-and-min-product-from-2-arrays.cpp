class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        // code here
        int largest=arr1[0];
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]>largest){
                largest=arr1[i];
            }
        }
        int smallest=arr2[0];
        for(int i=0;i<arr2.size();i++){
            if(arr2[i]<smallest){
                smallest=arr2[i];
            }
        }
        return largest*smallest;
    }
};