/* Structure of tree Node
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
};*/
class Solution {
  public:
  
    vector<int> ans;
    
    int solve(Node *root,int k){
        
        if(root==NULL) return 0;
        
        if(root->left==NULL && root->right==NULL) return 1;
        
        int leftLeaves=solve(root->left,k);
        int rightLeaves=solve(root->right,k);
        
        int totalLeaves=leftLeaves+rightLeaves;
        
        if(totalLeaves==k){
            ans.push_back(root->data);
        }
        
        return totalLeaves;
    }
    vector<int> kLeafNodes(Node* root, int k) {
        // code here
        
        ans.clear();
        
        solve(root,k);
        
        if(ans.empty()) return {-1};
        
        return ans;
        
    }
};