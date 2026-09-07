class Solution {
  public:
    int kthSmallest(vector<vector<int>> &mat, int k) {
        // code here
        
        int n=mat.size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        
        for(int i=0;i<n;i++){
            pq.push({mat[i][0],{i,0}});
        }
        
        while(k>1){
            auto curr=pq.top();
            pq.pop();
            
            int row=curr.second.first;
            int col=curr.second.second;
            
            
            if(col+1 < mat[row].size()){
                pq.push({mat[row][col+1],{row,col+1}});
            }
            k--;
        }
        
        return pq.top().first;
    }
};
