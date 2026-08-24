class Solution {
  public:
  
    bool diff(int n){
        string s=to_string(n);
        for(int i=0;i<s.size()-1;i++){
            if(abs(s[i]-s[i+1])!=1){
                return false;
            }
        }
        return true;
    }
    vector<int> getDigitDiff1AndLessK(vector<int>& arr, int k) {
        // code here
        
        vector<int> ans;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]<k && arr[i]>9 && diff(arr[i])){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};