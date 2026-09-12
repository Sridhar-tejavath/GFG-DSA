class Solution {
  public:
    int wordLadder(vector<string> &words, string &s, string &e) {
        // code here
        unordered_set<string> st(words.begin(),words.end());
        
        if(st.find(e)==st.end()) return 0;
        
        queue<string> q;
        q.push(s);
        
        int level=1;
        while(!q.empty()){
            
            int size=q.size();
            
            while(size--){
                
                string word=q.front();
                q.pop();
                
                for(int i=0;i<word.size();i++){
                    char original=word[i];
                    for(char ch='a';ch<='z';ch++){
                        word[i]=ch;
                        
                        if(word==e) return level+1;
                        
                        if(st.find(word)!=st.end())
                           q.push(word);
                           st.erase(word);
                    }
                    
                    word[i]=original;
                }
                
            }
            level++;
        }
        
        return 0;
    }
};