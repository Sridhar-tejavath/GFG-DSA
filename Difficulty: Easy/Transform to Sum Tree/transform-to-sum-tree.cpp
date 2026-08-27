/* Structure for Tree Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
   int transform(Node* root){
       if(root==NULL) return 0;
       int oldVal=root->data;
       
       int left=transform(root->left);
       int right=transform(root->right);
       
       root->data=left+right;
       
       return oldVal+left+right;
   }

    void toSumTree(Node *root) {
        // code here
        transform(root);
    }
};