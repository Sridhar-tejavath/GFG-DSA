/* Binary Tree Node Structure
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
  
    void inOrder(Node *root,vector<int> &result){
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }
    int findMedian(Node* root) {
        // Code here
        vector<int> result;
        
        inOrder(root,result);
        
        int n=result.size();
        if(n%2==0){
            return result[n/2-1];
        }
        else{
            return result[n/2];
        }
    }
};