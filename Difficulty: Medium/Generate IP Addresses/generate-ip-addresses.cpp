class Solution {
  public:
    vector<string> ans;
    
    bool isValid(string part){
        
        if(part.size()>1 && part[0]=='0'){
            return false;
        }
        
        int num=stoi(part);
        if(num>255){
            return false;
        }
        
        return true;
    }
    
    void solve(int index,string &s,int parts,string current){
        
        if(parts==4){
            if(index==s.size()){
                current.pop_back();
                ans.push_back(current);
            }
            return;
        }
        
        for(int len=1;len<=3;len++){
            if(index+len>s.size()){
                break;
            }
            string part=s.substr(index,len);
            
            if(!isValid(part)){
                continue;
            }
            
            solve(index+len,s,parts+1,current+part+".");
        }
    }
    vector<string> generateIp(string &s) {
        // code here
         solve(0,s,0,"");
         return ans;
    }
};