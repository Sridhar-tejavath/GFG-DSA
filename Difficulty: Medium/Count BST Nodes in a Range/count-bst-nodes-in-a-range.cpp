/* Binary Tree Node Structure
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
};
*/

class Solution {
  public:
  
    void solve(Node *root,vector<int> &result,int &l,int &h){
        if(root==NULL) return ;
        
        if(l<root->data){
            solve(root->left,result,l,h);
        }
        
        if(root->data >=l && root->data <=h){
            result.push_back(root->data);
        }
        
        if(root->data<h){
            solve(root->right,result,l,h);
        }
        
    }
    int getCount(Node *root, int l, int h) {
        // code here 
        vector<int> result;
        
        solve(root,result,l,h);
        
        return result.size();
    }
};