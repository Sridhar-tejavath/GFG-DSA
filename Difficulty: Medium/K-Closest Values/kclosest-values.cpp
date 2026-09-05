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
  
    void solve(Node *root,int target,int k,priority_queue<pair<int,int>> &pq){
        
        if(root==NULL) return ;
        
        int diff=abs(root->data-target);
        
        pq.push({diff,root->data});
        
        if(pq.size()>k)
          pq.pop();
          
        solve(root->left,target,k,pq);
        solve(root->right,target,k,pq);
        
    }
    vector<int> getKClosest(Node* root, int target, int k) {
        // code here
        priority_queue<pair<int,int>> pq;
        
        vector<int> ans;
        
        solve(root,target,k,pq);
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        return ans;
    }
};