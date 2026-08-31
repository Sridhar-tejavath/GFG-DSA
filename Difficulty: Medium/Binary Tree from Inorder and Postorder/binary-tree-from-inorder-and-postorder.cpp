/* Structure of binary tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    Node * build(vector<int> &inorder,vector<int> &postorder,int inStart,int inEnd,int &postIndex,unordered_map<int,int> mp){
        
        if(inStart>inEnd) return NULL;
        
        int rootValue=postorder[postIndex--];
        
        Node *root=new Node(rootValue);
        
        int pos=mp[rootValue];
        
        root->right=build(inorder,postorder,pos+1,inEnd,postIndex,mp);
        root->left=build(inorder,postorder,inStart,pos-1,postIndex,mp);
        
        return root;
    }
    Node *buildTree(vector<int> &inorder, vector<int> &postorder) {
        // code here
        unordered_map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]]=i;
        }
        
        int postIndex=postorder.size()-1;
        
        return build(inorder,postorder,0,inorder.size()-1,postIndex,mp);
        
    }
};