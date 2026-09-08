class Solution {
  public:
    vector<int> findSmallestRange(vector<vector<int>>& mat) {
        // Code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>> pq;
        
        int maxVal=INT_MIN;
        
        for(int i=0;i<mat.size();i++){
            pq.push({mat[i][0],{i,0}});
            
            maxVal=max(maxVal,mat[i][0]);
        }
        
        int bestL=pq.top().first;
        int bestR=maxVal;
        
        while(true){
            
            auto curr=pq.top();
            pq.pop();
            
            int minVal=curr.first;
            int row=curr.second.first;
            int col=curr.second.second;
            
            if(maxVal-minVal < bestR-bestL){
                bestL=minVal;
                bestR=maxVal;
            }
            
            if(col + 1 == mat[row].size()) break;
            
            int nextVal=mat[row][col+1];
            
            pq.push({nextVal,{row,col+1}});
            
            maxVal=max(maxVal,nextVal);
        }
        
        return {bestL,bestR};
    }
};