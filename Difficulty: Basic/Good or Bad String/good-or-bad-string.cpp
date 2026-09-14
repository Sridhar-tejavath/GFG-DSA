class Solution {
  public:
    bool isGoodOrBad(string &s) {
        // code here
        int vowels=0;
        int consonants=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='?'){
                consonants++;
                vowels++;
            }
            else if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
                vowels++;
                consonants=0;
            }
            else {
                consonants++;
                vowels=0;
            }
        
            if(vowels > 5 || consonants>3){
              return false;
            }
        }
        
        return true;
    }
};