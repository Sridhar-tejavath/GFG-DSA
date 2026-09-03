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
  
    void inOrder(Node *root,vector<int> &result){
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }
    int inOrderSuccessor(Node *root, Node *k) {
        // code here
        vector<int> result;
        
        inOrder(root,result);
        
        for(int i=0;i<result.size();i++){
            if(result[i]==k->data){
                if(i+1<result.size())
                    return result[i+1];
                return -1;
                }
            }
        
        return -1;
    }
};