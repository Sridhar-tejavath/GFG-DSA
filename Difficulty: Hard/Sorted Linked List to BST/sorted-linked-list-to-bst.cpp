/* structure of Linked List Node
class LNode {
public:
    int data;
    LNode* next;

    LNode(int x) {
        data = x;
        next = nullptr;
    }
};

// Tree Node
class TNode {
public:
    int data;
    TNode* left;
    TNode* right;

    TNode(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    TNode* construct(LNode* &head,int n){
        
        if(n<=0) return NULL;
        
        TNode* left=construct(head,n/2);
        
        TNode* root=new TNode(head->data);
        
        root->left=left;
        head=head->next;
        
        root->right=construct(head,n-n/2-1);
        
        return root;
    }
    TNode *sortedListToBST(LNode *head) {
        // code here
        
        LNode *temp=head;
        int n=0;
        
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        
        return construct(head,n);
    }
};