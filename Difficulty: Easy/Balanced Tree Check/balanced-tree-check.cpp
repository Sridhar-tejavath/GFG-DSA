/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int dfs(Node* root){
        if(root==NULL) return true;
        
        int lh=dfs(root->left);
        if(lh==-1) return -1;
        
        int rh=dfs(root->right);
        if(rh==-1) return -1;
        
        if(abs(lh-rh)>1) return -1;
        
        return 1+max(lh,rh);
    }
    bool isBalanced(Node* root) {
        // code here
        return dfs(root)!=-1;
    }
};