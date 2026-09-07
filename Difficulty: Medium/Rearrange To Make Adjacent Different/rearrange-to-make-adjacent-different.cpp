class Solution {
  public:
    bool canRearrange(string& s) {
        // code here
        int freq[26]={0};
        
        for(char ch : s){
            freq[ch-'a']++;
        }
        
        int maxFreq=0;
        for(int i=0;i<26;i++){
            maxFreq=max(maxFreq,freq[i]);
        }
        
        int remaining = s.length()-maxFreq;
        
        if(maxFreq <= remaining +1) return true;
        return false;
    }
};