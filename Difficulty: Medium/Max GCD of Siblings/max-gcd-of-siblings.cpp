class Solution {
  public:
    int maxBinTreeGCD(vector<vector<int>> &arr) {
        // code here
        unordered_map<int,vector<int>> mp;
        
        for(auto edge:arr){
            int parent=edge[0];
            int child=edge[1];
            mp[parent].push_back(child);
        }
        
        int ans=0;
        
        for(auto it:mp){
            
            vector<int> children=it.second;
            
            if(children.size()==2){
                int x=children[0];
                int y=children[1];
                
                ans=max(ans,gcd(x,y));
            }
        }
        return ans;
    }
};
