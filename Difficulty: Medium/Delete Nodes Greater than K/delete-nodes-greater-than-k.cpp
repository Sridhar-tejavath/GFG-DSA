/*Structure of binary tree node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/


class Solution {
  public:
    Node* deleteNode(Node* root, int k) {
        // code here
        if(root==NULL) return NULL;
        
        if(root->data >= k){
            return deleteNode(root->left,k);
        }
        
        root->right=deleteNode(root->right,k);
        
        return root;
    }
};