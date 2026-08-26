class Solution {
  public:
    int longestSubstring(string &s) {
        // code here
        int count=0;
        int maxi=0;
        for(char ch:s){
            if(ch=='1'){
                count++;
            }
            else{
                maxi=max(maxi,count);
                count=0;
            }
        }
        
        maxi=max(maxi,count);
        return maxi;
    }
};