class Solution {
  public:
    int minSwaps(string& s1, string& s2) {
        // code here
        if(s1.size()!=s2.size()) return -1;
        int a=0;
        int b=0;
        
        for(int i=0;i<s1.size();i++){
            if(s1[i]=='1' && s2[i]=='0'){
                b++;
            }
            else if(s1[i]=='0' && s2[i]=='1'){
                a++;
            }
        }
        
        if(a%2!=b%2){
            return -1;
        }
        return a/2+b/2+(a%2)*2;
    }
};