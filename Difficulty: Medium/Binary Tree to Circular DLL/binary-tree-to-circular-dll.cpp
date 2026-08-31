/* Tree Node Structure
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
  
    Node *head=NULL;
    Node *prev=NULL;
    
    void inorder(Node *root){
        
        if(root==NULL) return;
        
        inorder(root->left);
        
        if(head==NULL){
            head=root;
        }
        
        if(prev!=NULL){
            prev->right=root;
            root->left=prev;
        }
        
        prev=root;
        
        inorder(root->right);
    }
    Node *bTreeToCList(Node *root) {
        // code here.
        
        if(root==NULL) return NULL;
        
        head=NULL;
        prev=NULL;
        
        inorder(root);
        
        head->left=prev;
        prev->right=head;
        
        return head;
    }
};