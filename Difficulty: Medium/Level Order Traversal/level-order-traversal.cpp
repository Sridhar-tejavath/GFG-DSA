/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> levelOrder(Node *root) {
        // code here
        vector<int> ans;
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            Node* curr=q.front();
            q.pop();
            
            ans.push_back(curr->data);
            
            if(curr->left){
                q.push(curr->left);
            }
            if(curr->right){
                q.push(curr->right);
            }
        }
        
        return ans;
    }
};