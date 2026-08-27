/*  Structure of a Binary Tree
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    int maxWidth(Node* root) {
        // code here
        if(root==NULL) return 0;
        queue<Node*> q;
        q.push(root);
        
        
        int ans=0;
        while(!q.empty()){
            int size=q.size();
            ans=max(ans,size);
            
            for(int i=0;i<size;i++){
               Node* curr=q.front();
               q.pop();
               
               if(curr->left){
                   q.push(curr->left);
               }
               if(curr->right){
                   q.push(curr->right);
               }
            }
        }
        return ans;
    }
};