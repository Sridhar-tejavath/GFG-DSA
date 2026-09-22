

class Solution {
  public:
    // Function to find the largest number after k swaps.
    
    void solve(string &ans,int start,int k,string &s){
        
        if(s>ans){
            ans=s;
        }
        
        if(k==0 || start==s.size()) return;
        
        char maxi=s[start];
        
        for(int i=start+1;i<s.size();i++){
            maxi=max(maxi,s[i]);
        }
        
        if(maxi==s[start]){
            solve(ans,start+1,k,s);
            return ;
        }
        
        for(int i=start+1;i<s.size();i++){
            
            if(s[i]!=maxi){
                continue;
            }
            
            swap(s[start],s[i]);
            solve(ans,start+1,k-1,s);
            
            swap(s[start],s[i]);
        }
    }
    string findMaximumNum(string& s, int k) {
        // code here.
        string ans=s;
        
        solve(ans,0,k,s);
        
        return ans;
    }
};