/* A Tree node
class Node {
public:
    int data;
    Node *left, *right;
    Node(int x) {
        left = right = nullptr;
        data = x;
    }
};*/

class Solution {
  public:
  
    void solve(Node *root,int sum,vector<int> &path,vector<vector<int>> &ans){
        
        if(root==NULL) return ;
        
        path.push_back(root->data);
        sum -= root->data;
        
        if(sum==0){
            ans.push_back(path);
        }
        
        solve(root->left,sum,path,ans);
        solve(root->right,sum,path,ans);
        
        path.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum) {
        // code here
        vector<vector<int>> ans;
        vector<int> path;
        
        solve(root,sum,path,ans);
        
        return ans;
    }
};