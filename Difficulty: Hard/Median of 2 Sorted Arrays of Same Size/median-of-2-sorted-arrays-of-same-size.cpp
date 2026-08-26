class Solution {
    public:
      double medianOf2(vector<int>& a, vector<int>& b) {
          // code here

          if(a.size()>b.size()){
              return medianOf2(b,a);
          }

          int n=a.size();
          int m=b.size();

          int low=0;
          int high=n;

          while(low<=high){

              int cutA=low+(high-low)/2;
              int cutB=(n+m+1)/2-cutA;

              int leftA=(cutA==0)? INT_MIN : a[cutA-1];
              int rightA=(cutA==n)? INT_MAX : a[cutA];

              int leftB=(cutB==0)? INT_MIN : b[cutB-1];
              int rightB=(cutB==m)? INT_MAX :  b[cutB];

              if(leftA<=rightB && leftB<=rightA){

                  if((n+m)%2==1){
                      return max(leftA,leftB);
                  }else{
                      return (max(leftA,leftB)+min(rightA,rightB))/2.0;
                  }
              }

              if(leftA>rightB){
                  high=cutA-1;
              }else{
                  low=cutA+1;
              }
          }
          return 0.0;

      }
  };