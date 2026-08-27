/* Structure of Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right; 
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    vector<int> reverseLevelOrder(Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        queue<Node*> q;
        stack<int> st;
        q.push(root);
        
        while(!q.empty()){
            Node* curr=q.front();
            q.pop();
            
            st.push(curr->data);
            if(curr->right){
                q.push(curr->right);
            }
            if(curr->left){
                q.push(curr->left);
            }
        }
        
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        
        return ans;
        
    }
};