/* Node Structure
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
  
    int count=0;
    void solve(Node *root,int k,vector<Node*> &path,unordered_set<Node*> &visited){
        
        if(root==NULL) return;
        
        path.push_back(root);
        
        if(root->left==NULL && root->right==NULL){
            int index=path.size()-1-k;
            
            if(index>=0 && visited.find(path[index])==visited.end()){
                count++;
                
                visited.insert(path[index]);
            }
        }
        
        solve(root->left,k,path,visited);
        solve(root->right,k,path,visited);
        
        path.pop_back();
    }
    
    
    int kthFromLeaf(Node* root, int k) {
        // code here.
        count=0;
        vector<Node*> path;
        unordered_set<Node*> visited;
        
        solve(root,k,path,visited);
        
        return count;
        
        
    }
};