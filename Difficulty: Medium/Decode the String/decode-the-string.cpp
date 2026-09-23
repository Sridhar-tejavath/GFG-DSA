class Solution {
  public:
    string decodedString(string &s) {
        // code here
        stack<int> stNum;
        stack<string> stStr;
        
        string curr="";
        int num=0;
        
        for(int i=0;i<s.size();i++){
            
            if(isdigit(s[i])){
                num=num*10+(s[i]-'0');
            }
            
            else if(s[i]=='['){
                stNum.push(num);
                stStr.push(curr);
                
                curr="";
                num=0;
            }
            else if(s[i]==']'){
                int k=stNum.top();
                stNum.pop();
                
                string prev=stStr.top();
                stStr.pop();
                
                string temp="";
                for(int j=0;j<k;j++){
                    temp += curr;
                }
                
                curr=prev+temp;
            }
            else{
                curr += s[i];  //character
            }
        }
        
        return curr;
    }
};