/* Binary Tree Node Structure
class Node {
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
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }
    bool findTarget(Node *root, int target) {
        // code here.
        vector<int> result;
        
        inOrder(root,result);
        
        int i=0;
        int j=result.size()-1;
        
        while(i<j){
            int sum=result[i]+result[j];
            
            if(sum==target){
                return true;
            }
            else if(sum>target){
                j--;
            }
            else{
                i++;
            }
        }
        return false;
    }
};