/* Node class of the binary tree
class Node
{
    int data;
    Node* left, right;
    Node(int key)
    {
        data = key;
        left = right = nullptr;
    }
}
*/

class Solution {
  public:
    vector<int> getCorner(Node* root) {
        // code here
        vector<int> ans;
        
        if(root==NULL) return ans;
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int size=q.size();
            for(int i=0;i<size;i++){
                Node *curr=q.front();
                q.pop();
                
                if(i==0 || i==size-1){
                    ans.push_back(curr->data);
                }
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        return ans;
    }
};