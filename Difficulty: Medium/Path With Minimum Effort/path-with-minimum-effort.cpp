class Solution {
  public:
    int minCostPath(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        
        vector<vector<int>> distance(n,vector<int>(m,1e9));
        
        set<pair<int,pair<int,int>>> st;
        distance[0][0]=0;
        st.insert({0,{0,0}});
        
        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};
        
        while(!st.empty()){
            
            auto curr=*st.begin();
            st.erase(st.begin());
            
            int currEffort=curr.first;
            int row=curr.second.first;
            int col=curr.second.second;
            
            for(int i=0;i<4;i++){
                
                int newRow=row+dr[i];
                int newCol=col+dc[i];
                
                if(row==n-1 && col==m-1) return currEffort;
                
                if(newRow>=0 && newRow<n && newCol>=0 && newCol<m){
                    
                    int edgeEffort=abs(mat[row][col]-mat[newRow][newCol]);
                    
                    int newEffort=max(currEffort,edgeEffort);
                    
                    if(newEffort<distance[newRow][newCol]){
                        
                        if(distance[newRow][newCol]!=1e9)
                            st.erase({distance[newRow][newCol],{newRow,newCol}});
                            
                        distance[newRow][newCol]=newEffort;
                        st.insert({distance[newRow][newCol],{newRow,newCol}});
                        
                    }
                }
            }
        }
        
        return 0;
    }
};
