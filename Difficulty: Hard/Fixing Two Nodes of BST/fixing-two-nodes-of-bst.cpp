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
    Node* correctBST(Node* root) {
        // code here
        Node * first=NULL;
        Node *second=NULL;
        Node *prev=NULL;
        Node *curr=root;
        
        while(curr!=NULL){
            if(curr->left==NULL){
                if(prev!=NULL && prev->data>curr->data){
                    if(first==NULL)
                        first=prev;
                    second=curr;
                }
                
                prev=curr;
                curr=curr->right;
            }
            else{
                Node *pred=curr->left;
                while(pred->right !=NULL && pred->right != curr){
                    pred=pred->right;
                }
                if(pred->right==NULL){
                    pred->right=curr;
                    curr=curr->left;
                }
                else{
                    pred->right=NULL;
                    
                    if(prev!=NULL && prev->data > curr->data){
                        if(first==NULL)
                          first=prev;
                         second=curr;
                    }
                    prev=curr;
                    curr=curr->right;
                }
            }
        }
        
        swap(first->data,second->data);
        
        return root;
    }
};