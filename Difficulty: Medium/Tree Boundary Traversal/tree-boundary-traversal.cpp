/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    void leftBoundary(Node* root,vector<int>& ans){
        Node* curr=root->left;
        
        while(curr){
            if(!isLeaf(curr))
              ans.push_back(curr->data); 
        
            if(curr->left){
                curr=curr->left;
            }
            else{
                curr=curr->right;
            }
        }
    }
    
    bool isLeaf(Node* root){
        return root && root->left==NULL && root->right==NULL;
    }
    
    void addLeaves(Node* root,vector<int>& ans){
        if(!root){
            return ;
        }
        
        if(isLeaf(root)){
            ans.push_back(root->data);
            return;
        }
        
        addLeaves(root->left,ans);
        addLeaves(root->right,ans);
    }
    
    void rightBoundary(Node* root,vector<int>& ans){
        
        vector<int> temp;
        
        Node* curr=root->right;
        
        while(curr){
            if(!isLeaf(curr))
               temp.push_back(curr->data);
        
            if(curr->right){
                curr=curr->right;
            }
            else{
                curr=curr->left;
            }
            
        }
        
        reverse(temp.begin(),temp.end());
        
        for(int x:temp){
            ans.push_back(x);
        }
    }
    
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        
        if(!root){
            return ans;
        }
        
        if(!isLeaf(root)){
            ans.push_back(root->data);
        }
        else{
            ans.push_back(root->data);
            return ans;
        }
        
        leftBoundary(root,ans);
        
        addLeaves(root,ans);
        
        rightBoundary(root,ans);
        
        return ans;
        
    }
};