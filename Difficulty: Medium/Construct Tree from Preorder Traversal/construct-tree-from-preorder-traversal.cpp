/* Structure of the binary tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    Node *preOrder(vector<int> &pre,vector<char> & preLN,int &index){
        
        if(index==pre.size()) return 0;
        
        Node *root=new Node(pre[index]);
        
        if(preLN[index]=='L'){
            index++;
            return root;
        }
        
        index++;
        
        root->left=preOrder(pre,preLN,index);
        root->right=preOrder(pre,preLN,index);
        
        return root;
    }
    Node* constructTree(vector<int>& pre, vector<char>& preLN) {
        // code here
        int index=0;
        
        return preOrder(pre,preLN,index);
    }
};