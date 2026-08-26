class Solution {
  public:
    string shortestPath(string &s) {
        // code here
        int E=0,W=0,N=0,S=0;
        
        for(char ch:s){
            if(ch=='W') W++;
            else if(ch=='E')  E++;
            else if(ch=='N') N++;
            else if(ch=='S') S++;
        }
        
        int x=min(W,E);
        E -=x;
        W -=x;
        
        int y=min(S,N);
        N -=y;
        S -=y;
        
        string ans="";
        
        while(E--) ans += 'E';
        while(N--) ans += 'N';
        while(S--) ans += 'S';
        while(W--) ans += 'W';
        
        return ans;
    }
};