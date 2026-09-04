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
  
    void inOrder(Node *root,vector<int> &result){
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }
    
    Node* build(vector<int> result){
        
        if(result.empty()) return NULL;
        
        Node* root=new Node(result[0]);
        Node *curr=root;
        
        for(int i=1;i<result.size();i++){
            curr->right=new Node(result[i]);
            curr=curr->right;
        }
        return root;
    }
   
    Node *flattenBST(Node *root) {
        // code here
        vector<int> result;
        
        inOrder(root,result);
        
        return build(result);
    }
};