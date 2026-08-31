/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void solve(Node *root,int maxAncestor,int& ans){
        
        if(root==NULL) return;
        
        ans=max(ans,maxAncestor-root->data);
        
        maxAncestor=max(maxAncestor,root->data);
        
        solve(root->left,maxAncestor,ans);
        solve(root->right,maxAncestor,ans);
        
    }
    int maxDiff(Node* root) {
        // code here
        if(root==NULL) return 0;
        int ans=INT_MIN;
        
        solve(root->left,root->data,ans);
        solve(root->right,root->data,ans);
        
        return ans;
    }
};