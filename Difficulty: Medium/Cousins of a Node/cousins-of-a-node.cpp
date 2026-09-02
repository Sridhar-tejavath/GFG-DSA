/* Structure of binary tree node
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
    vector<int> getCousins(Node* root, Node* node) {
        // code here
        vector<int> ans;
        if(root==NULL || root==node){
            return {-1};
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            bool found= false;
            
            for(int i=0;i<size;i++){
                Node *curr=q.front();
                q.pop();
                
                if(curr->left==node || curr->right==node){
                    found=true;
                    continue;
                }
                
                if(curr->left){
                    q.push(curr->left);
                }
                
                if(curr->right){
                    q.push(curr->right);
                }
            }
            
            if(found){
                while(!q.empty()){
                    ans.push_back(q.front()->data);
                    q.pop();
                }
                if(ans.empty()) return {-1};
                return ans;
            }
        }
        return {-1};
        
    }
};