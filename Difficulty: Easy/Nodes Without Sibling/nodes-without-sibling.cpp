/* Definition of Tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    void siblings(Node* root,vector<int>& ans){
        
        if(root==NULL) return ;
        
        if(root->left!=NULL && root->right==NULL) {
            ans.push_back(root->left->data);
        }
        if(root->left==NULL && root->right!=NULL){
            ans.push_back(root->right->data);
        }
        
        siblings(root->left,ans);
        siblings(root->right,ans);
    }
    vector<int> noSibling(Node* root) {
        // code here
        vector<int> ans;
        
        siblings(root,ans);
        
        sort(ans.begin(),ans.end());
        
        if(ans.empty()){
            ans.push_back(-1);
        }
        return ans;
    }
};