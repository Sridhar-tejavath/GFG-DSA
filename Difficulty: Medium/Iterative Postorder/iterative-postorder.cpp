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
    vector<int> postOrder(Node* node) {
        // code here
        vector<int> ans;
        
        stack<Node*> st1,st2;
        
        st1.push(node);
        
        while(!st1.empty()){
            Node *curr=st1.top();
            st1.pop();
            
            st2.push(curr);
            
            if(curr->left){
                st1.push(curr->left);
            }
            if(curr->right){
                st1.push(curr->right);
            }
        }
        
        while(!st2.empty()){
            ans.push_back(st2.top()->data);
            st2.pop();
        }
        return ans;
    }
};