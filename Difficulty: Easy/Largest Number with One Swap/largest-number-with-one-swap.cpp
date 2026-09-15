class Solution {
  public:
    string largestSwap(string &s) {
        // code here
        
        int n=s.size();
        
        for(int i=0;i<s.size();i++){
            
            int maxi=i;
            
            for(int j=i+1;j<s.size();j++){
                
                if(s[j]>=s[maxi]){
                    maxi=j;
                }
            }
            
            if(s[maxi]>s[i]){
                swap(s[maxi],s[i]);
                break;
            }
        }
        
        return s;
    }
};