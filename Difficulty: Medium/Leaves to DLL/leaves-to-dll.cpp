/* Binary Tree Node Structure
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
  
    Node *head=NULL;
    Node *prev=NULL;
    
    Node* solve(Node *root){
        
        if(root==NULL) return NULL;
        
        if(root->left==NULL && root->right==NULL){
            if(head==NULL){
                head=root;
            }
            
            
            if(prev!=NULL){
                prev->right=root;
                root->left=prev;
                
            }
            
            prev=root;
            
            return NULL;
        }
        
        root->left=solve(root->left);
        root->right=solve(root->right);
        
        return root;
    }
    Node* convertToDLL(Node* root) {
        // code here
        
        solve(root);
        
        return head;
        
    }
};