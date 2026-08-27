/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

/*you are required to
complete this function */
class Solution {
  public:
  
    bool dfs(Node* root,int target){
        
        if(root==NULL) return false;
        
        target=target-root->data;
        
        if(root->left==NULL && root->right==NULL){
            return target==0;
        }
        
        return dfs(root->left,target) || dfs(root->right,target);

    }
    bool hasPathSum(Node *root, int target) {
        // Your code here
        return dfs(root,target);
    }
};