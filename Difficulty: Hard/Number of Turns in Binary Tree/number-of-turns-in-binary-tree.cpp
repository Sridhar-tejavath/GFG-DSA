/* Structure of Binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  
    Node *LCA(Node *root,int p,int q){
        if(root==NULL) return NULL;
        
        if(root->data==p || root->data==q) return root;
        
        Node *left=LCA(root->left,p,q);
        Node *right=LCA(root->right,p,q);
        
        if(left && right){
            return root;
        }
        
        if(left){
            return left;
        }
        else{
            return right;
        }
    }
    
    bool find(Node *root,int target,int dir,int &turns){
        
        if(root==NULL) return false;
        
        if(root->data==target) return true;
        
        
        if(root->left){
            int newTurns=turns;
            
            if(dir==2){
                newTurns++;
            }
            
            if(find(root->left,target,1,newTurns)){
                turns=newTurns;
                return true;
            }
        }
        
        if(root->right){
            int newTurns=turns;
            
            if(dir==1){
                newTurns++;
            }
            
            if(find(root->right,target,2,newTurns)){
                turns=newTurns;
                return true;
            }
        }
        
        return false;
    }
    int numberOfTurns(Node* root, int p, int q) {
        // code here
        if(root==NULL || p==q) return -1;
        
        Node *lca=LCA(root,p,q);
        
        if(lca==NULL) return -1;
        
        int t1=0,t2=0;
        
        bool foundP=find(lca,p,0,t1);
        bool foundQ=find(lca,q,0,t2);
        
        
        if(!foundP || !foundQ) return -1;
        
        if(lca->data==p || lca->data==q) {
            int ans=t1+t2;
            
            if(ans==0) return -1;
            return ans;
        }
        
        return t1+t2+1; 
    }
};