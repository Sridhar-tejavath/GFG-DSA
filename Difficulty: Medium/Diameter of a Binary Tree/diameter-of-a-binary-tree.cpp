/*Structure of binary tree Node 
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    int height(Node* root,int& diameter){
        if(root==NULL) return 0;
        
        int leftHeight=height(root->left,diameter);
        int rightHeight=height(root->right,diameter);
        
        diameter=max(diameter,leftHeight+rightHeight);
        
        return 1+max(leftHeight,rightHeight);
    }
    int diameter(Node* root) {
        // code here
        int diameter=0;
        
        height(root,diameter);
        
        return diameter;
        
    }
};