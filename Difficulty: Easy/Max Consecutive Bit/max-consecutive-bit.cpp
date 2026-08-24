class Solution {
  public:
    int maxConsecBits(vector<int> &arr) {
        // code here
        int count0=0;
        int count1=0;
        int ans=0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                count0++;
                count1=0;
            }
            else{
                count1++;
                count0=0;
            }
            
            ans = max(ans, max(count0, count1));
        }
        return ans;
    }
};