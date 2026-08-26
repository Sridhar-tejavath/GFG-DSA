class Solution {
  public:
    string encode(string &s) {
        // code here
        int i=0;
        string ans="";
        
        while(i<s.size()){
            char ch=s[i];
            int count=0;
            
            while(i<s.size() && s[i]==ch){
                count++;
                i++;
            }
            
            ans += ch;
            ans += to_string(count);
        }
        return ans;
    }
};