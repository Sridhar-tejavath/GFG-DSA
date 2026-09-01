/* Structure of tree Node
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
    void alternateReverse(Node* root) {
        // code here
        if(root==NULL) return;
        
        queue<Node*> q;
        q.push(root);
        
        int level=0;
        
        while(!q.empty()){
            
            int n=q.size();
            vector<Node*> node;
            
            for(int i=0;i<n;i++){
                Node *curr=q.front();
                q.pop();
                
                node.push_back(curr);
                
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
            
            if(level%2==1){
                int l=0;
                int r=node.size()-1;
                
                while(l<r){
                    swap(node[l]->data,node[r]->data);
                    l++;
                    r--;
                }
            }
          level++;  
        }
    }
};