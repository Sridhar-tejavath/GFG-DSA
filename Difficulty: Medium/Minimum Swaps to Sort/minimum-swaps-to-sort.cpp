class Solution {
  public:
    int minSwaps(vector<int>& arr) {
        // Code here
        int n=arr.size();
        
        vector<pair<int,int>> v;
        
        for(int i=0;i<n;i++){
            v.push_back({arr[i],i});
        }
        
        sort(v.begin(),v.end());
        
        vector<bool> visited(n,false);
        
        int ans=0;
        
        for(int i=0;i<n;i++){
            if(visited[i] || v[i].second==i) continue;
            
            int cycleSize=0;
            int j=i;
            while(!visited[j]){
                visited[j]=true;
                
                j=v[j].second;
                cycleSize++;
            }
            
            ans += cycleSize -1;
        }
        
        return ans;
    }
};