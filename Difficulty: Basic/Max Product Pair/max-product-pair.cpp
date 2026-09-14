class Solution {
  public:
    int maxProduct(vector<int>& arr) {
        // code here
        int maxi=arr[0];
        int Secondmaxi=arr[1];
        
        if(maxi<Secondmaxi){
            swap(maxi,Secondmaxi);
        }
        
        for(int i=2;i<arr.size();i++){
            if(arr[i]>maxi){
                Secondmaxi=maxi;
                maxi=arr[i];
            }
            else if(arr[i]>Secondmaxi){
                Secondmaxi=arr[i];
            }
        }
        return maxi*Secondmaxi;
    }
};