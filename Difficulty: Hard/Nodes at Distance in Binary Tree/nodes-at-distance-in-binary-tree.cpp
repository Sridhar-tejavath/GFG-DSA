/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/
class Solution {
  public:
  
    void markParent(Node *root,unordered_map<Node*,Node*> &parent,Node* &targetNode,int target,int k){
        
        if(root==NULL) return;
        
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
    
    vector<int> kDistanceNodes(Node* root, int target, int k) {
        // code here
        
        vector<int> ans;
        
        unordered_map<Node*,Node*> parent;
        Node *targetNode=NULL;
        
        markParent(root,parent,targetNode,target,k);
        
        if(targetNode==NULL) return ans;
        
        unordered_map<Node*,bool> visited;
        queue<Node*> q;
        q.push(targetNode);
        visited[targetNode]=true;
        
        int distance=0;
        while(!q.empty()){
            int n=q.size();
            
            if(distance==k){
                while(!q.empty()){
                    ans.push_back(q.front()->data);
                    q.pop();
                }
                break;
            }
            
            for(int i=0;i<n;i++){
                Node *curr=q.front();
                q.pop();
                
                if(curr->left && !visited[curr->left]){
                    visited[curr->left]=true;
                    q.push(curr->left);
                }
                
                if(curr->right && !visited[curr->right]){
                    visited[curr->right]=true;
                    q.push(curr->right);
                }
                
                if(parent.find(curr)!=parent.end() && !visited[parent[curr]]){
                    visited[parent[curr]]=true;
                    q.push(parent[curr]);
                }
            }
            
            distance++;
        }
        
        sort(ans.begin(),ans.end());
        return ans;
    }
};