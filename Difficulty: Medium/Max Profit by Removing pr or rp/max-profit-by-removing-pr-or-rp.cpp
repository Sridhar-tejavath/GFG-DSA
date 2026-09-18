class Solution {
  public:
    int solve(int x, int y, string &s) {
        // code here
        if(x<y){
            swap(x,y);
            for(char &ch:s){
                if(ch=='p')
                   ch='r';
                else if(ch=='r')
                   ch='p';
            }
        }
        
        int ans=0;
        string st;
        
        for(char ch:s){
            if(!st.empty() && st.back()=='p' && ch=='r'){
                st.pop_back();
                ans +=x;
            }
            else{
                st.push_back(ch);
            }
        }
        
        string temp;
        for(char ch:st){
            if(!temp.empty() && temp.back()=='r' && ch=='p'){
                temp.pop_back();
                ans +=y;
            }
            else{
                temp.push_back(ch);
            }
        }
        
        return ans;
    }
};