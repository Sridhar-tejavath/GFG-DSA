/* Linked List Node Structure
class NodeLL {
  public:
    int data;
    NodeLL *next;

    NodeLL(int x) {
        data = x;
        next = nullptr;
    }
};

Binary Tree Node Structure
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    Node *linkedListToBinaryTree(NodeLL *head) {
        // code here
        if(head==NULL) return NULL;
        
        Node *root=new Node(head->data);
        queue<Node*> q;
        
        q.push(root);
        head=head->next;
        
        while(head!=NULL){
            Node *curr=q.front();
            q.pop();
            
            curr->left=new Node(head->data);
            q.push(curr->left);
            head=head->next;
            
            if(head!=NULL){
                curr->right=new Node(head->data);
                q.push(curr->right);
                head=head->next;
            }
        }
        return root;
    }
};