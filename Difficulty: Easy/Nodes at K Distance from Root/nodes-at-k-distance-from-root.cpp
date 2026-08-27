/* Structure of Binary Tree Node 
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
  
    void solve(Node* root,int k,vector<int>& ans){
        
        if(root==NULL) return;
        
        if(k==0){
            ans.push_back(root->data);
        }
        
        solve(root->left,k-1,ans);
        solve(root->right,k-1,ans);
    }
    vector<int> kdistance(Node *root, int k) {
        // code here
        vector<int> ans;
        solve(root,k,ans);
        return ans;
    }
};