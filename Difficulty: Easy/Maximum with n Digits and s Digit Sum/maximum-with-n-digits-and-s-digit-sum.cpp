class Solution {
  public:
    string findLargest(int n, int s) {
        // code here
        if(s>9*n){
            return "-1";
        }
        
        if(s==0){
            if(n==1){
                return "0";
            }
            else{
                return "-1";
            }
        }
        
        string ans="";
        for(int i=0;i<n;i++){
            if(s>=9){
                ans +='9';
                s -= 9;
            }else{
                ans +=char('0'+s);
                s=0;
            }
        }
        
        return ans;
    }
};