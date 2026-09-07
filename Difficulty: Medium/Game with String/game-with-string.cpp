class Solution {
  public:
    int minValue(string &s, int k) {
        // code here
        int freq[26]={0};
        for(char ch : s){
            freq[ch-'a']++;
        }
        
        priority_queue<int> pq;
        
        for(int i=0;i<26;i++){
            if(freq[i]>0){
                pq.push(freq[i]);
            }
        }
        
        while(k--){
            int x=pq.top();
            pq.pop();
            
            x--;
            
            pq.push(x);
        }
        
        int ans=0;
        
        while(!pq.empty()){
            int x=pq.top();
            pq.pop();
            
            ans += x*x;
        }
        
        return ans;
    }
};