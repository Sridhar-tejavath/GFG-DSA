class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<int> row(n,1);
        
        for(int i=0;i<n;i++){
            for(int j=i-1;j>=1;j--){
              row[j]=row[j]+row[j-1];
            }
        }
        return row;
    }
};
