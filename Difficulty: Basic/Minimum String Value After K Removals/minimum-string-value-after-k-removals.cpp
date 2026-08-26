class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        int freq[26]={0};
        
        for(char ch:s){
            freq[ch-'a']++;
        }
        
        while(k>0){
            int maxi=0;
            
            for(int i=1;i<26;i++){
                if(freq[i]>freq[maxi]){
                    maxi=i;
                }
            }
            
            if(freq[maxi]==0) break;
            freq[maxi]--;
            k--;
        }
        
        int ans=0;
        for(int i=0;i<26;i++){
            ans += freq[i]*freq[i];
        }
        
        return ans;
        
    }
};











// class Solution {
//   public:
//     int minValue(string &s, int k) {
//         // code here
//         vector<int> freq(26,0);
//         for(char ch:s){
//             freq[ch-'a']++;
//         }
        
//         priority_queue<int> pq;
//         for(int f:freq){
//             if(f>0){
//                 pq.push(f);
//             }
//         }
        
//         while(k>0){
//             int f=pq.top();
//             pq.pop();
            
//             f--;
//             k--;
//             if(f>0){
//                 pq.push(f);
//             }
//         }
        
//         int ans=0;
//         while(!pq.empty()){
//             int f=pq.top();
//             pq.pop();
            
//             ans += f*f;
            
//         }
//         return ans;
//     }
// };