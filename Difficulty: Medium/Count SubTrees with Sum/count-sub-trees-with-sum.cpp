/* Structure of tree node
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
  
    int count=0;
    
    int solve(Node *root,int x){
        
        if(root==NULL) return 0;
        
        int left=solve(root->left,x);
        int right=solve(root->right,x);
        
        int sum=left+right+root->data;
        
        if(sum==x){
            count++;
        }
        
        return sum;
    }
    int countSubtrees(Node* root, int x) {
        // code here
        count=0;
        
        solve(root,x);
        
        return count;
    }
};