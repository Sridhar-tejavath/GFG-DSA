class Solution {
  public:
    int minCost(int n, int m, vector<int>& x, vector<int>& y) {
        //  code here
        
        sort(x.rbegin(),x.rend());
        sort(y.rbegin(),y.rend());
        
        int i=0,j=0;
        int vertical=1;
        int horizantal=1;
        int ans=0;
        
        while(i<x.size() && j<y.size()){
            if(x[i]>y[j]){
                ans += x[i]*horizantal;
                vertical++;
                i++;
            }
            else{
                ans += y[j]*vertical;
                horizantal++;
                j++;
            }
        }
        
        while(i<x.size()){
            ans +=x[i]*horizantal;
            i++;
        }
        
        while(j<y.size()){
            ans += y[j]*vertical;
            j++;
        }
        
        return ans;
    }
    
};
