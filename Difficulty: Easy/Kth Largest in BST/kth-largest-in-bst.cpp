/* Structure of a Binary Tree Node
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
  
    void inOrder(Node *root,vector<int> &result){
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
    }
    int kthLargest(Node *root, int k) {
        // code here
        vector<int> result;
        inOrder(root,result);
        int Largest=result[result.size()-k];
        
        return Largest;
    }
};