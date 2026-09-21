class Solution {
  public:
  
    string makePalindrome(string s){
        
        int n=s.size();
        
        for(int i=0;i<n/2;i++){
            s[n-i-1]=s[i];
        }
        
        return s;
    }
    
    string closestPalindrome(string &n) {
        // code here
        string rev=n;
        reverse(rev.begin(),rev.end());
        
        if(rev==n) return n;
        
        
        int len=n.size();
        
        string a=makePalindrome(n); // mirror lefthalf
        
        string b=n;   // increase middle half
        int mid=(len-1)/2;
        int carry=1;
        
        for(int i=mid;i>=0 && carry;i--){
            int digit=(b[i]-'0')+carry;
            b[i]=char('0'+digit%10);
            carry=digit/10;
        }
        b=makePalindrome(b);
        
        string c=n;  // decrease middle half
        carry=1;
        
        for(int i=mid;i>=0 && carry;i--){
            int digit=(c[i]-'0')-carry;
            
            if(digit<0){
                c[i]='9';
                carry=1;
            }
            else{
                c[i]=char('0'+digit);
                carry=0;
            }
        }
        
        c=makePalindrome(c);
        
        string low=string(len-1,'9');
        string high="1"+string(len-1,'0')+"1";
        
        if(c.size()>1 && c[0]=='0')
          c.erase(c.begin());
         
         long long num=stoll(n);
         long long x=stoll(a);
         long long y=stoll(b);
         long long z=stoll(c);
         long long l=low.empty() ? 0:stoll(low);
         long long h=stoll(high);
         
         string ans=a;
         
         long long diff=llabs(x-num);
         
         if(llabs(y-num) < diff || llabs(y-num)==diff && y<stoll(ans)){
             ans=b;
             diff=llabs(y-num);
         }
         
         if(llabs(z-num) < diff || llabs(z-num) ==diff && z<stoll(ans)){
             ans=c;
             diff=llabs(z-num);
         }
         
         if(!low.empty()){
             if(llabs(l-num) < diff || llabs(l-num)==diff && l<stoll(ans)){
                 ans=low;
                 diff=llabs(l-num);
             }
         }
         
         if(llabs(h-num)<diff || llabs(h-num)==diff && h<stoll(ans)){
             ans=high;
         }
         
         return ans;
    }
};