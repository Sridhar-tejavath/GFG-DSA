/* Structure of a Binary Search Tree node
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
  
    Node *minVal(Node *root){
        while(root->left!=NULL){
            root=root->left;
        }
        return root;
    }
    
    
    Node* delNode(Node* root, int x) {
        // code here
        if(root==NULL) return NULL;
        
        if(x>root->data){
           root->right = delNode(root->right,x);
        }
        else if(x<root->data){
           root->left = delNode(root->left,x);
        }
        else{
            if(root->left==NULL && root->right==NULL) {
                delete root;
                return NULL;
            }
            else if(root->left==NULL){
                Node *temp=root->right;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                Node *temp=root->left;
                delete root;
                return temp;
            }
            else{
                Node *temp=minVal(root->right);
                root->data=temp->data;
                root->right=delNode(root->right,temp->data);
            }
        }
        return root;
    }
};