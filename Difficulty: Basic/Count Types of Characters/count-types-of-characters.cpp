class Solution {
  public:
    vector<int> count(string &s) {
        // code here.
        
        int upper=0;
        int lower=0;
        int special=0;
        int numeric=0;
        vector<int> ans;
        
        for(char ch:s){
            if(isupper(ch)){
                upper++;
            }
            else if(islower(ch)){
                lower++;
            }
            else if(!isalpha(ch) && !isdigit(ch)){
                special++;
            }
            else {
                numeric++;
            }
        }
        
        ans.push_back(upper);
        ans.push_back(lower);
        ans.push_back(numeric);
        ans.push_back(special);
        
        return ans;
    }
};