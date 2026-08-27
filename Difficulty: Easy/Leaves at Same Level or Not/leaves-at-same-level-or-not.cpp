/* Definition for Node
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
   
    bool check(Node* root,int level,int& leafLevel){
        
        if(root==NULL) return true;
        
        if(root->left==NULL && root->right==NULL){
            if(leafLevel==-1){
                leafLevel=level;
            }
            return level==leafLevel;
        }
        
        return check(root->left,level+1,leafLevel) && check(root->right,level+1,leafLevel);
    }
    bool check(Node* root) {
        // code here
        int leafLevel=-1;
        
        return check(root,0,leafLevel);
        
    }
};