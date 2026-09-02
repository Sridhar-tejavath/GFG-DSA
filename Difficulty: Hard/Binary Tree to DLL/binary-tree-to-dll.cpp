/* Structure for tree and linked list
class Node {
  public:
    int data;
    Node *left, *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
  
    Node *prev=NULL;
    Node *head=NULL;
    
    void solve(Node *root){
        if(root==NULL) return;
        
        solve(root->left);
        
        if(head==NULL){
            head=root;
        }
        if(prev!=NULL){
            prev->right=root;
            root->left=prev;
        }
        prev=root;
        
        solve(root->right);
        
    }
    Node* treeToDLL(Node* root) {
        // code here
        
        prev=NULL;
        head=NULL;
        
        solve(root);
        
        return head;
        
    }
};