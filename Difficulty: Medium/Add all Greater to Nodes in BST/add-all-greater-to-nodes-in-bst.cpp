/* BST Node Structure
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
  
    void inOrder(Node *root,vector<int> &result){
        
        if(root==NULL) return ;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }
    
    void transform(vector<int> &result){
        
        if(result.size()==0) return ;
        
        for(int i=result.size()-2;i>=0;i--){
            result[i] = result[i]+result[i+1];
        }
    }
    
     void update(Node *root,vector<int> &result,int &index){
         
         if(root==NULL) return;
         
         update(root->left,result,index);
         
         root->data=result[index];
         index++;
         
         update(root->right,result,index);
     }
    Node *transformTree(Node *root) {
        // code here
        vector<int> result;
        
        inOrder(root,result);
        
        transform(result);
        
        int index=0;
        
        update(root,result,index);
        
        return root;
    }
};