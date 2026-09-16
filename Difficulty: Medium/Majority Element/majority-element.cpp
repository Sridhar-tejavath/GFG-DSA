class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int candidate=0;
        int count=0;
        for(int x:arr){
            if(count==0){
                candidate=x;
            }
            if(x==candidate){
                count++;
            }
            else{
                count--;
            }
        }
        
        count=0;
        for(int x:arr){
            if(x==candidate){
                count++;
            }
        }
        
        if(count > arr.size()/2) {
            return candidate;
        }
        return -1;
    }
};