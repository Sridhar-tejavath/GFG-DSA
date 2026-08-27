class Solution {
  public:
    string roundToNearest(string& s) {
        // Code Here
        
        int n=s.size();
        int d=s[n-1]-'0';
        
        if(d==0) return s;
        
        if(d<=5){
            s[n-1]='0';
            return s;
        }
        s[n-1]='0';
        int i=n-2;
        while(i>=0 && s[i]=='9'){
            s[i]='0';
            i--;
        }
        if(i<0) return "1"+s;
        
        s[i]++;
        
        return s;
        
    }
};