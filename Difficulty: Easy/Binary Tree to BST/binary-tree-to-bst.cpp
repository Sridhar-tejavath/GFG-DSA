/* The Node structure is
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
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
    
    void convert(Node *root,vector<int> &result,int &index){
        
        if(root==NULL) return;
        
        convert(root->left,result,index);
        
        root->data=result[index];
        index++;
        
        convert(root->right,result,index);
    }
    
    Node *binaryTreeToBST(Node *root) {
        // code here
        vector<int> result;
        
        inOrder(root,result);
        sort(result.begin(),result.end());
        
        int index=0;
        convert(root,result,index);
        
        return root;
    }
};