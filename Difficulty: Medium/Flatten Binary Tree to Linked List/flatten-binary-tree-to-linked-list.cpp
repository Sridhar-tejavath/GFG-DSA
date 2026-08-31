/* Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int data) {
        this->data = data;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    Node *prev=NULL;
    
    void flatten(Node* root) {
        // code here
        if(root==NULL) return;
        
        Node *left=root->left;
        Node *right=root->right;
        
        if(prev!=NULL){
            prev->right=root;
        }
        
        root->left=NULL;
        prev=root;
        
        flatten(left);
        flatten(right);
    }
};