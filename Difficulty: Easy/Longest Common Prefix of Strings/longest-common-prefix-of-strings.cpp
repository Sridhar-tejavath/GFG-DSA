class Solution {
  public:
    string longestCommonPrefix(vector<string> arr) {
        // your code here
        if(arr.size()==0) return "";
        
        sort(arr.begin(),arr.end());
        
        string first=arr[0];
        string last=arr[arr.size()-1];
        
        int minLength=min(first.size(),last.size());
        
        string word="";
        for(int i=0;i<minLength;i++){
            if(first[i]!=last[i]) break;
            word += first[i];
        }
        
        return word;
    }
};