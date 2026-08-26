class Solution {
  public:
    int extractMaximum(string &s) {
        // code here
        int maxi=-1;
        int num=0;
        bool found=false;
        
        for(char ch:s){
            if(isdigit(ch)){
                num = num*10 + (ch-'0');
                found=true;
            }else{
                if(found)
                   maxi=max(maxi,num);
                num=0;
                found=false;
            }
        }
        if(found) {
            maxi=max(maxi,num);
        }
        return maxi;
    }
};