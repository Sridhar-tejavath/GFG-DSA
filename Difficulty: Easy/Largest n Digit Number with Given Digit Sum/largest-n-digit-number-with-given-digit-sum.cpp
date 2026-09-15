class Solution {
  public:
    string largestNumber(int n, int s) {
        // code here
        if(s>9*n) return "-1";
        
        if(s==0){
            
            return string(n,'0');
        }
        
        string ans="";
        for(int i=0;i<n;i++){
            if(s>9){
                ans += '9';
                s -= 9;
            }
            else {
                ans += char('0'+s);
                break;
            }
        }
        
        while(ans.size()<n){
            ans += '0';
        }
        
        return ans;
    }
};