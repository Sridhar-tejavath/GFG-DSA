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
    int minDiff(Node *root, int k) {
        // code here
        int ans=root->data;
        
        while(root != NULL){
            if(abs(root->data-k)<abs(ans-k)){
                ans=root->data;
            }
            
            if(root->data==k){
                return 0;
            }
            else if(root->data>k){
                root=root->left;
            }
            else{
                root=root->right;
            }
        }
        return abs(ans-k);
    }
};