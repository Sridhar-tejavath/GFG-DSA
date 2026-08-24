class Solution {
  public:
    int typeOfArr(vector<int>& arr) {
        // code here.
        int asc=0;
        int desc=0;
        
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
                asc++;
            }
            else{
                desc++;
            }
        }
        
        if(desc==0) return 1;
        if(asc==0) return 2;
        if(asc==1) return 3;
        if(desc==1) return 4;
        else return -1;
    }
};