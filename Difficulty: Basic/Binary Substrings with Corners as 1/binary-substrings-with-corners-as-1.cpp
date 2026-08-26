class Solution {
  public:
    int binarySubstring(string& s) {
        // code here
        int ans=0;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans += count;
                count++;
            }
        }
        return ans;
    }
};