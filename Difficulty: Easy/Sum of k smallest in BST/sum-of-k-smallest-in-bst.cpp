/* Structure of a Tree Node
class Node {
    int data;
    Node* right;
    Node* left;
    Node(int x){
        data = x;
        right = nullptr;
        left = nullptr;
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
    int sum(Node* root, int k) {
        // code here
        vector<int> result;
        
        inOrder(root,result);
        
        int sum=0;
        
        for(int i=0;i<k;i++){
            sum +=result[i];
        }
        
        return sum;
    }
};