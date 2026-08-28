/* Definition for Node
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
  
    int solve(Node* node,bool &valid){
        if(node==NULL) return 0;
        
        if(node->left==NULL && node->right==NULL) return node->data;
        
        int leftSum=solve(node->left,valid);
        int rightSum=solve(node->right,valid);
        
        if(node->data != leftSum+rightSum) valid=false;
        
        return node->data+leftSum+rightSum;
        
    }
    bool isSumTree(Node* node) {
        // code here
        bool valid=true;
        
        solve(node,valid);
        
        return valid;
    }
};