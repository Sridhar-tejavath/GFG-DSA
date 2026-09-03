/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    bool check(Node *root,long min,long max){
        if(root==NULL) return true;
        
        if(root->data <= min || root->data >=max) return false;
        
        return check(root->left,min,root->data) && check(root->right,root->data,max);
    }
    bool isBST(Node* root) {
        // code here
        return check(root,LONG_MIN,LONG_MAX);
    }
};