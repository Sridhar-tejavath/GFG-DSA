class Solution {
  public:
    string modify(string& s) {
        // code here
        
        string vowels="";
        for(char ch:s){
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'){
                vowels += ch;
            }
        }
        
        int n=vowels.size();
        int i=0;
        
        string ans="";
        for(char ch:s){
            if(!(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')){
                ans += ch;
            }
            else{
                ans += vowels[n-i-1];
                i++;
            }
        }
        return ans;
    }
};
