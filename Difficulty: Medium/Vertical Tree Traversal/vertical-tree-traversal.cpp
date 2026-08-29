/* Structure of binary tree node
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
    vector<vector<int>> verticalOrder(Node *root) {
        // code here
        vector<vector<int>> ans;
        
        if(root==NULL) return ans;
        map<int,vector<int>> mp;
        
        queue<pair<Node*,int>> q;
        
        q.push({root,0});
        
        while(!q.empty()){
            Node* curr=q.front().first;
            int hd=q.front().second;
            
            q.pop();
            
            mp[hd].push_back(curr->data);
            
            if(curr->left){
                q.push({curr->left,hd-1});
            }
            
            if(curr->right){
                q.push({curr->right,hd+1});
            }
        }
        
        for(auto x:mp){
            ans.push_back(x.second);
        }
        
        return ans;
    }
};