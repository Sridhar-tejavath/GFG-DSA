class Solution {
  public:
    vector<int> countBSTs(vector<int>& arr) {
        // Code here
        int n=arr.size();
        
        vector<long long> cat(n+1,0);
        cat[0]=1;
        
        for(int i=1;i<=n;i++){
            for(int j=0;j<i;j++){
                cat[i] += cat[j]*cat[i-j-1];
            }
        }
        
        vector<int> temp=arr;
        sort(temp.begin(),temp.end());
        
        unordered_map<int,int> rank;
        
        for(int i=0;i<n;i++){
            rank[temp[i]]=i;
        }
        
        vector<int> ans(n);
        
        for(int i=0;i<n;i++){
            int left=rank[arr[i]];
            int right=n-left-1;
            
            ans[i] = cat[left]*cat[right];
        }
        
        return ans;
    }
};