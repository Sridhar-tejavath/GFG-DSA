class Solution {
  public:
    string concatenatedString(string &s1, string &s2) {
        //  code here
       vector<int> freq(256,0);
       
       for(char ch:s2){
           freq[ch]=1;
       }
       
       string ans="";
       
       for(char ch:s1){
           if(freq[ch]==0){
                ans += ch;
           }
       }
       
       fill(freq.begin(),freq.end(),0);
       
       for(char ch:s1){
           freq[ch]=1;
       }
       
       for(char ch:s2){
           if(freq[ch]==0){
               ans += ch;
           }
       }
       
       if(ans.size()==0) return "-1";
       
       return ans;
       
    }
};