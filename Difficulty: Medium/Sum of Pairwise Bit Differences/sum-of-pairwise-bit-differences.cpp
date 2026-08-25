class Solution {
  public:
    int sumBitDifferences(vector<int>& arr) {
        // Code Here
        long long ans=0;
        int n=arr.size();
        for(int bit=0;bit<32;bit++){
            long long ones=0;
            for(int i=0;i<n;i++){
                if(arr[i] & (1<<bit))
                    ones++;
            }
            long long zeros=n-ones;
            ans += 2LL* ones* zeros;
        }
        
        return ans;
    }
};