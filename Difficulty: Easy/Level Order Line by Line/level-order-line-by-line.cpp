/* A binary tree Node

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
 */
class Solution {
  public:
    vector<vector<int>> levelOrder(Node* root) {
        // code here
        vector<vector<int>> ans;
        vector<int> result;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int n=q.size();
            result.clear();
            for(int i=0;i<n;i++){
                Node* curr=q.front();
                q.pop();
                
                result.push_back(curr->data);
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            ans.push_back(result);
        }
        return ans;
    }
};