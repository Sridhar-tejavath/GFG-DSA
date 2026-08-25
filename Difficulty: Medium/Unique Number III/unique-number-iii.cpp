class Solution {
  public:
    int getSingle(vector<int> &arr) {
        // code here
        map<int,int> mp;
        
        for(int x:arr){
            mp[x]++;
        }
        
        for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
        }
    }
};