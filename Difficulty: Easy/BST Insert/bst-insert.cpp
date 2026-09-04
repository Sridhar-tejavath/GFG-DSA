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
    Node* insert(Node* root, int key) {
        // code  here
        if(root==NULL){
            return new Node(key);
        }
        
        Node *curr=root;
        
        while(1){
            if(curr->data > key){
               if(curr->left!=NULL){
                  curr=curr->left;
                }
                else{
                   curr->left=new Node(key);
                   break;
                }
            }
            else if(curr->data < key){
                if(curr->right !=NULL){
                    curr=curr->right;
                }
                else{
                    curr->right=new Node(key);
                    break;
                }
            }
            else{
                break;
            }
        }
        
        return root;
    }
};