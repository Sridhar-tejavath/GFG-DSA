class Solution {
  public:
  
    void permutations(string &s,string &path,vector<string> &ans,vector<int> &freq){
        
        if(path.size()==s.size()){
            ans.push_back(path);
            return ;
        }
        
        for(int i=0;i<256;i++){
            
            if(freq[i]==0){
                continue;
            }
            
            freq[i]--;
            path.push_back(char(i));
            
            permutations(s,path,ans,freq);
            
            path.pop_back();
            freq[i]++;
        }
    
    }
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string> ans;
        string path="";
        vector<int> freq(256,0);
        
        for(char ch:s){
            freq[(unsigned char)ch]++;
        }
        
        permutations(s,path,ans,freq);
        
        return ans;
        
    }
};
