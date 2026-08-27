class Solution {
  public:
    string removeDuplicates(string &s) {
        // code here
        vector<int> freq(256,0);
        string ans="";
        
        for(char ch:s){
            if(freq[ch]==0){
                ans += ch;
                freq[ch]++;
            }
        }
        
        return ans;
    }
};