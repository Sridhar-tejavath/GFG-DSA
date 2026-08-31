/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    bool isIsomorphic(Node *root1, Node *root2) {
        // code here
        
        if(root1==NULL && root2==NULL) return true;
        if(root1==NULL || root2==NULL) return false;
        if(root1->data != root2->data) return false;
        
        bool noswap= isIsomorphic(root1->left,root2->left) && isIsomorphic(root1->right,root2->right);
        
        bool swap= isIsomorphic(root1->left,root2->right) && isIsomorphic(root1->right,root2->left);
        
        return noswap || swap;
    }
};