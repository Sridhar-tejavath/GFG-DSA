/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};*/

class Solution {
  public:
  
    void solve(Node *root,int &sum){
        
        if(root==NULL) return;
        
        solve(root->right,sum);
        
        int old=root->data;
        root->data=sum;
        sum += old;
        
        solve(root->left,sum);
    }
    void transformTree(Node *root) {
        // code here
        int sum=0;
        
        solve(root,sum);
    }
};