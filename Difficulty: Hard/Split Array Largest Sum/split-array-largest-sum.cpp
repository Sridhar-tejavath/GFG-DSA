class Solution {
  public:
    int splitArray(vector<int>& arr, int k) {
        // code here
        
        int low=*max_element(arr.begin(),arr.end());
        int high=0;
        for(int x:arr){
            high += x;
        }
        
        while(low<=high){
            
            int mid=low+(high-low)/2;
            int count=1;
            int sum=0;
            
            for(int x:arr){
                if(sum+x<=mid){
                    sum += x;
                }
                else{
                    count++;
                    sum=x;
                }
            }
            if(count<=k){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
        
    }
};