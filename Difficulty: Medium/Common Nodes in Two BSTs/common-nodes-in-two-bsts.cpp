/* Structure of a Binary Search Tree node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void inOrder(Node* root,vector<int> &result){
        
        if(root==NULL) return;
        
        inOrder(root->left,result);
        result.push_back(root->data);
        inOrder(root->right,result);
        
    }

    vector<int> findCommon(Node* r1, Node* r2) {
        // code here
        vector<int> a,b;
        vector<int> ans;
        
        inOrder(r1,a);
        inOrder(r2,b);
        
        int i=0,j=0;
        
        while(i<a.size() && j<b.size()){
            if(a[i]>b[j]){
                j++;
            }
            else if(a[i]<b[j]){
                i++;
            }
            else {
                ans.push_back(a[i]);
                i++;
                j++;
            }
        }
        return ans;

    }
};