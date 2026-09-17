class Solution {
  public:
    int catchThieves(vector<char> &arr, int k) {
        // Code here
        vector<int> police;
        vector<int> thieves;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]=='P'){
                police.push_back(i);
            }
            else{
                thieves.push_back(i);
            }
        }
        
        int i=0;
        int j=0;
        int ans=0;
        
        while(i<police.size() && j<thieves.size()){
            if(abs(police[i]-thieves[j])<=k){
                ans++;
                i++;
                j++;
            }
            else if(police[i]<thieves[j]){
                i++;
            }
            else {
                j++;
            }
        }
        
        return ans;
    }
};