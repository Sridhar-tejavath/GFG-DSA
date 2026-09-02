/* Structure of binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void markParents(Node *root,unordered_map<Node*,Node*> &parent,Node* &targetNode,int target){
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            Node *curr=q.front();
            q.pop();
            
            if(curr->data==target){
                targetNode=curr;
            }
            
            if(curr->left){
                parent[curr->left]=curr;
                q.push(curr->left);
            }
            if(curr->right){
                parent[curr->right]=curr;
                q.push(curr->right);
            }
        }
    }
    
    int minTime(Node* root, int target) {
        // code here
        unordered_map<Node*,Node*> parent;
        Node *targetNode=NULL;
        
        markParents(root,parent,targetNode,target);
        unordered_set<Node*> visited;
        
        queue<Node*> q;
        q.push(targetNode);
        visited.insert(targetNode);
        
        int time=0;
        
        while(!q.empty()){
            
            int n=q.size();
            bool burned=false;
            
            while(n--){
                Node *curr=q.front();
                q.pop();
                
                if(curr->left && !visited.count(curr->left)){
                    visited.insert(curr->left);
                    q.push(curr->left);
                    burned=true;
                }
                
                if(curr->right && !visited.count(curr->right)){
                    visited.insert(curr->right);
                    q.push(curr->right);
                    burned=true;
                }
                
                if(parent.count(curr) && !visited.count(parent[curr])){
                    visited.insert(parent[curr]);
                    q.push(parent[curr]);
                    burned=true;
                }
            }
            
            if(burned)
              time++;
        }
        
        return time;
    }
};