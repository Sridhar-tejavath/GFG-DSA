class Solution {
  public:
    vector<vector<string>> findSequences(vector<string> &words, string &s, string &e) {
        // code here
        vector<vector<string>> ans;
        unordered_set<string> st(words.begin(),words.end());
        
        if(st.find(e)==st.end()) return ans;
        
        queue<vector<string>> q;
        q.push({s});
        bool found=false;
        
        while(!q.empty() && !found){
            
            int size=q.size();
            unordered_set<string> UsedThisLevel;
            while(size--){
               vector<string> path=q.front();
               q.pop();
            
               string word=path.back();
            
               for(int i=0;i<word.size();i++){
                    char original=word[i];
                    for(char ch='a';ch<='z';ch++){
                       word[i]=ch;
                    
                       if(ch==original) continue;
                       if(st.find(word)!=st.end()){
                          vector<string> newPath=path;
                          newPath.push_back(word);
                          
                          if(word==e) {
                              ans.push_back(newPath);
                              found=true;
                          }
                          else{
                              q.push(newPath);
                          }
                          UsedThisLevel.insert(word);
                       }
                    }
                    
                    word[i]=original;
               }
            }
            
            for(string word:UsedThisLevel){
                st.erase(word);
            }   
        }
        return ans;
    }
};