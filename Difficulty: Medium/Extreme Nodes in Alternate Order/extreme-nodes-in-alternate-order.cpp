/* Structure of a binary tree Node
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
    vector<int> extremeNodes(Node* root) {
        // code here
        vector<int> ans;
        
        queue<Node*> q;
        q.push(root);
        
        bool leftToright=false;
        
        while(!q.empty()){
            int n=q.size();
            vector<int> level ;
            for(int i=0;i<n;i++){
               Node*curr=q.front();
               q.pop();
            
               level.push_back(curr->data);
               
               if(curr->left){
                   q.push(curr->left);
               }
               if(curr->right){
                   q.push(curr->right);
               }
            }
            
            if(leftToright){
                ans.push_back(level[0]);
            }
            else{
                ans.push_back(level[n-1]);
            }
            
            leftToright = !leftToright;
        }
        return ans;
    }
};