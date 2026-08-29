/* Structure of a Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    int preIndex=0;
    Node* build(vector<int> &inorder,vector<int> &preorder,int inStart,int inEnd){
        
        if(inStart>inEnd) return NULL;
        
         Node* root=new Node(preorder[preIndex++]);
         
         int pos=inStart;
         while(inorder[pos]!=root->data){
             pos++;
         }
         
         root->left=build(inorder,preorder,inStart,pos-1);
         root->right=build(inorder,preorder,pos+1,inEnd);
         
         return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
        // code here
        
        return build(inorder,preorder,0,inorder.size()-1);
        
    }
};