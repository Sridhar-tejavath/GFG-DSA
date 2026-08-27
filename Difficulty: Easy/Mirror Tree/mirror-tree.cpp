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
    void mirror(Node* root) {
        // code here
        if(root==NULL) return ;
        
        swap(root->left,root->right);
        
        mirror(root->left);
        mirror(root->right);
    }
};