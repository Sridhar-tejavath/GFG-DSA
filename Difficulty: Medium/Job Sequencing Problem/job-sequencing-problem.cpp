class Solution {
  public:
  
    int find(vector<int> &parent,int x){
        if(parent[x]==x)
            return x;
        
        return parent[x]=find(parent,parent[x]);
    }
    vector<int> jobSequencing(vector<int> &deadline, vector<int> &profit) {
        // code here
        int n=deadline.size();
        
        vector<pair<int,int>> jobs;
        
        for(int i=0;i<n;i++){
            jobs.push_back({profit[i],deadline[i]});
        }
        sort(jobs.begin(),jobs.end(),
        [](auto &a,auto &b){
            return a.first>b.first;
        });
        
        int maxDeadline=*max_element(deadline.begin(),deadline.end());
        
        vector<int> parent(maxDeadline+1,false);
        for(int i=0;i<=maxDeadline;i++){
            parent[i]=i;
        }
        
        int count=0;
        int totalProfit=0;
        
        for(auto job:jobs){
            
            int profitVal=job.first;
            int deadlineVal=job.second;
            
            int slot=find(parent,deadlineVal);
            if(slot>0){
                    
                count++;
                totalProfit += profitVal;
                    
                parent[slot]=find(parent,slot-1);
            }
        }
        
        return {count,totalProfit};
        
    }
};