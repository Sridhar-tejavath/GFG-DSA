/* Structure of Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  
    int count=0;
    
    void solve(Node *root,int k,int sum,unordered_map<long long,int>& mp){
        
        if(root==NULL) return;
        
        sum += root->data;
        
        if(mp.find(sum-k) != mp.end()){
            
            count += mp[sum-k];
        }
        
        mp[sum]++;
        
        solve(root->left,k,sum,mp);
        solve(root->right,k,sum,mp);
        
        mp[sum]--;
    }
    
    int countAllPaths(Node *root, int k) {
        // code here
        unordered_map<long long,int> mp;
        
        mp[0]=1;
        
        solve(root,k,0,mp);
        
        return count;
    }
};