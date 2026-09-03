/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        Node *pre=NULL;
        Node *succ=NULL;
        Node *curr=root;
        
        while(curr){
            if(curr->data==key){
                if(curr->left){
                    Node *temp=curr->left;
                    while(temp->right){
                        temp=temp->right;
                    }
                    pre=temp;
                }
                
                if(curr->right){
                    Node *temp=curr->right;
                    while(temp->left){
                        temp=temp->left;
                    }
                    succ=temp;
                }
                
                break;
            }
            else if(curr->data > key){
                succ=curr;
                curr=curr->left;
            }
            else{
                pre=curr;
                curr=curr->right;
            }
        }
       return {pre,succ};
       }
};