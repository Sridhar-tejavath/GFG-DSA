class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int> ans;
        vector<int> freq(n+1,0);
        for(int x:arr){
            freq[x]++;
        }
        
        for(int i=1;i<=n;i++){
            if(freq[i]>1){
                ans.push_back(i);
            }
        }
        return ans;
    }
};