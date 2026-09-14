class Solution {
  public:
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        int n=val.size();
        vector<pair<double,pair<long long ,long long>>> items;
        
        for(int i=0;i<n;i++){
            double ratio=(double)val[i]/wt[i];
            items.push_back({ratio,{val[i],wt[i]}});
        }
        
        sort(items.begin(),items.end(),
        [](auto &a,auto &b){
            return a.first>b.first;
        });
        
        double totalValue=0.0;
        for(auto &item:items){
            double ratio=item.first;
            long long val=item.second.first;
            long long wt=item.second.second;
            
            if(wt<=capacity){
                totalValue += val;
                capacity -= wt;
            }
            else {
                totalValue += ratio*capacity;
                break;
            }
        }
        
        return totalValue;
    }
};
