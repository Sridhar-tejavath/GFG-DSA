class Solution {
  public:
    bool pythagoreanTriplet(vector<int>& arr) {
        // code here
        int freq[1001]={0};
        
        for(int x:arr){
            freq[x]++;
        }
        
        for(int a=1;a<=1000;a++){
            if(freq[a]==0) continue;
            
            for(int b=a;b<=1000;b++){
                if(freq[b]==0) continue;
                if(a==b && freq[a]<2) continue;
                
                int sum=a*a+b*b;
                int c=sqrt(sum);
                
                if(c*c==sum && c<=1000 && freq[c]>0){
                    if(a==c && b==c && freq[c]<3) continue;
                    if(a==c && freq[c]<2) continue;
                    if(b==c && freq[c]<2) continue;
                    return true;
                }
            }
        }
        return false;
    }
};