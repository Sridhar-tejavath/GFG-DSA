class Solution {
  public:
    int countWords(string &s) {
        // code here
        int count=0;
        int i=0;
        while(i<s.size()){
            while(i<s.size() && (s[i]==' ' || s[i]=='\n'  || s[i]=='\t')){
                i++;
            }
            
            if(i<s.size()){
               count++;
            
               while(i<s.size() && (s[i]!=' ' && s[i]!='\n' && s[i]!='\t')){
                  i++;
                }
            }
            
        }
        
        return count;
    }
};