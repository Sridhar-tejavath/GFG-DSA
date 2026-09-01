/* Structure of a Tree Node
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
}; */
class Solution {
  public:
  
    int solve(Node *root,int currentNumber){
        
        if(root==NULL) return 0;
        
        currentNumber = currentNumber*10 + root->data;
        
        if(root->left==NULL && root->right==NULL) return currentNumber;
        
        int left=solve(root->left,currentNumber);
        int right=solve(root->right,currentNumber);
        
        return left+right;
        
    }
    int treePathsSum(Node *root) {
        // code here
        return solve(root,0);
    }
};