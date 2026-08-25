class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        // Code here
        int i=0;
        int j=0;
        
        int sumA=0;
        int sumB=0;
        int sum=0;
        while(i<a.size() && j<b.size()){
            if(a[i]<b[j]){
                sumA += a[i];
                i++;
            }
            else if(a[i]>b[j]){
                sumB += b[j];
                j++;
            }
            else{
                sum += max(sumA,sumB)+a[i];
                
                sumA=0;
                sumB=0;
                
                i++;
                j++;
            }
        }
        
        while(i<a.size()){
            sumA += a[i];
            i++;
        }
        
        while(j<b.size()){
            sumB += b[j];
            j++;
        }
        
        sum += max(sumA,sumB);
        
        return sum;
        
    }
};