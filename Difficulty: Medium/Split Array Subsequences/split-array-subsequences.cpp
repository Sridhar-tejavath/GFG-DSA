class Solution {
  public:
    bool isPossible(vector<int>& arr, int k) {
        // code here
        unordered_map<int,priority_queue<int,vector<int>,greater<int>>> mp;
        
        for(int x : arr){
            
            if(mp.count(x-1) && !mp[x-1].empty()){
                int len =mp[x-1].top();
                mp[x-1].pop();
                mp[x].push(len+1);
            }
            else{
                mp[x].push(1);
            }
        }
        
        for(auto &p : mp){
            
            while(!p.second.empty()){
                if(p.second.top()<k) return false;
                p.second.pop();
            }
        }   
        return true;
    }
};
