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
};*/

class Solution {
  public:
    vector<int> diagonalSum(Node* root) {
        // code here
        vector<int> ans;
        
        if(root==NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            int n=q.size();
            int sum=0;
            
            while(n--){
            
               Node *curr=q.front();
               q.pop();
            
            
               while(curr!=NULL){
                
                   sum += curr->data;
                
                   if(curr->left){
                       q.push(curr->left);
                    }
                curr=curr->right;
               }
            }
            
            ans.push_back(sum);
        }
        
        return ans;
    }
};