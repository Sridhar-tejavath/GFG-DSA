/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/
class Solution {
  public:
    bool areCousins(Node* root, int a, int b) {
        // code here
        if(root==NULL) return false;
        
        if(a==b) return false;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int n=q.size();
            
            bool foundX=false;
            bool foundY=false;
            
            for(int i=0;i<n;i++){
                Node *curr=q.front();
                q.pop();
            
                if(curr->left && curr->right){
                   if((curr->left->data==a && curr->right->data==b) || (curr->left->data==b && curr->right->data==a)){
                       return false;
                    }
                }
            
                if(curr->data==a) foundX=true;
                if(curr->data==b) foundY=true;
                
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
            }
            
            if(foundX && foundY) return true;
            if(foundX || foundY) return false;
        }
        
        return false;
    }
};