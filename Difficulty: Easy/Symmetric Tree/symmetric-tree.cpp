/*
class Node {
public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool ismirror(Node* left,Node* right){
        
        if(left==NULL && right==NULL) return true;
        if(left==NULL || right== NULL) return false;
        if(left->data!=right->data) return false;
        
        return ismirror(left->left,right->right) && ismirror(left->right,right->left);
    }
    bool isSymmetric(Node* root) {
        // code here
        if(root==NULL) return true;
        
        return ismirror(root->left,root->right);
    }
};