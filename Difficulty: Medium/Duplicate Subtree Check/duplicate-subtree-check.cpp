/* Structure of a Tree Node
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
  
    unordered_map<string,int> mp;
    
    string solve(Node *root,bool &found,int &size){
        
        if(root==NULL){
            size=0;
            return "#";
        }
        
        int leftsize,rightsize;
        
        string left=solve(root->left,found,leftsize);
        string right=solve(root->right,found,rightsize);
        
        size=leftsize+rightsize+1;
        
        string curr=left + "," + to_string(root->data) + "," + right;
        
        if(size>=2){
            mp[curr]++;
            
            if(mp[curr]>=2)
              found=true;
        }
        
        return curr;
    }
    
    bool dupSub(Node* root) {
        // code here
        bool found=false;
        int size;
        
        solve(root,found,size);
        
        return found;
    }
};