/* Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    int solve(Node *root,int k,int node,int &ans){
        
          
        if(root==NULL) return -1;
        
        if(root->data==node) return 0;
        
        int left=solve(root->left,k,node,ans);
        
        if(left!=-1){
            if(left+1==k){
                ans=root->data;
            }
            return left+1;
        }
        
        int right=solve(root->right,k,node,ans);
        
        if(right!=-1){
            if(right+1==k){
                ans=root->data;
            }
            
            return right+1;
        }
        return -1;
    }
    int kthAncestor(Node *root, int k, int node) {
        // code here
      int ans=-1;
      
      solve(root,k,node,ans);
      
      return ans;
    }
};
