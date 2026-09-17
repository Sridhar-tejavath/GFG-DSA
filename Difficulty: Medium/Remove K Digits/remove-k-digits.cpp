class Solution {
  public:
    string removeKdig(string &s, int k) {
        // code here
        string st;
        
        for(char ch:s){
            while(!st.empty() && k>0 && st.back() > ch){
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }
        
        while(k>0){
            st.pop_back();
            k--;
        }
        
        int i=0;
        while(i<st.size() && st[i]=='0'){
            i++;
        }
        
        st=st.substr(i);
        
        if(st.empty()) return "0";
        return st;
    }
};