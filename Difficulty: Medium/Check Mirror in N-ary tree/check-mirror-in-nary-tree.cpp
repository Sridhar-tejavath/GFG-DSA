class Solution {
  public:
    bool checkMirrorTree(int e, vector<int>& t1, vector<int>& t2) {
        // code here
        vector<vector<int>> a(e+2);
        vector<vector<int>> b(e+2);
        
        for(int i=0;i<t1.size();i+=2){
            int u=t1[i];
            int v=t1[i+1];
            a[u].push_back(v);
        }
        
        for(int i=0;i<t2.size();i+=2){
            int u=t2[i];
            int v=t2[i+1];
            b[u].push_back(v);
        }
        
        for(int i=1;i<=e+1;i++){
            if(a[i].size()!=b[i].size()) return false;
            for(int j=0;j<a[i].size();j++){
                if(a[i][j]!=b[i][a[i].size()-1-j]) return false;
            }
        }
        return true;
    }
};