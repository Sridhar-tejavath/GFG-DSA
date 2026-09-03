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
  
    int count=0;
    int smallest=-1;
  
    void inOrder(Node *root,vector<int> &result,int &k){
        
        if(root==NULL) return;
        
        inOrder(root->left,result,k);
        
        count++;
        
        if(count==k){
            smallest=root->data;
            return;
        }
        
        inOrder(root->right,result,k);
    }
    int kthSmallest(Node *root, int k) {
        // code here
        vector<int> result;
        
        inOrder(root,result,k);
        
        return smallest;
    }
};