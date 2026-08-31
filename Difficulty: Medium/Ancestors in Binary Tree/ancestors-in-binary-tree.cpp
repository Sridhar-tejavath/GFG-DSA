/* Structure of a Node
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
  
    bool solve(Node *root,int target,vector<int> &ans){
        
        if(root==NULL) return false;
        
        if(root->data==target){
            return true;
        }
        
        if(solve(root->left,target,ans) || solve(root->right,target,ans)){
            ans.push_back(root->data);
            return true;
        }
        
        return false;
    }
    vector<int> ancestors(Node *root, int target) {
        // Code here
        vector<int> ans;
        
        solve(root,target,ans);
        
        return ans;
    }
};