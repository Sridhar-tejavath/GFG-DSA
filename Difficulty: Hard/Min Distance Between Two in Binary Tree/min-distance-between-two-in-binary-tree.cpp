/* A binary tree node
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
};
 */

class Solution {
  public:
  
    Node* LCA(Node *root,int a,int b){
        
        if(root==NULL) return NULL;
        
        if(root->data==a || root->data==b) return root;
        
        Node *left=LCA(root->left,a,b);
        Node *right=LCA(root->right,a,b);
        
        if(left != NULL && right != NULL) return root;
        
        if(left!=NULL) return left;
        return right;
    }
    
    int distance(Node *root,int x){
        
        if(root==NULL) return -1;
        
        if(root->data==x) return 0;
        
        int left=distance(root->left,x);
        if(left!=-1) return left+1;
        
        int right=distance(root->right,x);
        if(right!=-1) return right+1;
        
        return -1;
        
    }
    int findDist(Node* root, int a, int b) {
        // code here
        
        Node *lca=LCA(root,a,b);
        
        int d1=distance(lca,a);
        int d2=distance(lca,b);
        
        return d1+d2;
        
    }
};