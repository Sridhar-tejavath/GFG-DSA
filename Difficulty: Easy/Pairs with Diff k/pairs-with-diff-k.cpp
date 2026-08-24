class Solution {
  public:
    int countPairs(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int> mp;
        int count=0;
        for(int x:arr){
            
            count += mp[x-k];
            count += mp[x+k];
            
            mp[x]++;
        }
        
        return count;
        
    }
};