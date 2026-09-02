/* Structure of binary tree node
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
    vector<int> serialize(Node *root) {
        //  code here
        vector<int> ans;
        if(root==NULL){
            ans.push_back(-1);
            return ans;
        }
        
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            
            Node *curr=q.front();
            q.pop();
            
            if(curr==NULL){
                ans.push_back(-1);
                continue;
            }
            
            ans.push_back(curr->data);
            
            q.push(curr->left);
        
            q.push(curr->right);
    
        }
        
        return ans;
    }

    Node *deSerialize(vector<int> &arr) {
        
        //  code here
        
        if(arr.size()==0 || arr[0]==-1) return NULL;
        
        Node *root=new Node((arr[0]));
        
        queue<Node*> q;
        q.push(root);
        
        int i=1;
        while(!q.empty() && i<arr.size()){
            Node *curr=q.front();
            q.pop();
            
            if(arr[i]!=-1){
                curr->left=new Node(arr[i]);
                q.push(curr->left);
            }
            i++;
            
            if(i<arr.size() && arr[i]!=-1){
                curr->right=new Node(arr[i]);
                q.push(curr->right);
            }
            i++;
        }
        return root;
        
    }
};