/* Structure of tree Node
class Node {
public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/
class Solution {
  public:
  
    void solve(Node *root,int low ,int high,vector<int> &result){
        
        if(root==NULL) return;
        
        if(root->data>low){
            solve(root->left,low,high,result);
        }
        
        if(root->data >=low && root->data<=high){
            result.push_back(root->data);
        }
        
    if(root->data<high)
    solve(root->right,low,high,result);
    }
    vector<int> nodesInRange(Node *root, int low, int high) {
        // code here
        vector<int> result;
        
        solve(root,low,high,result);
        
        return result;
    }
};