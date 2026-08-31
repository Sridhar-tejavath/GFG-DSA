/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* createTree(vector<int>& parent) {
        // code here
        int n=parent.size();
        
        vector<Node*> nodes(n);
        
        for(int i=0;i<n;i++){
            nodes[i]=new Node(i);
        }
        
        Node *root=NULL;
        
        for(int i=0;i<n;i++){
            if(parent[i]==-1){
                root=nodes[i];
            }
            else{
                int p=parent[i];
                
                if(nodes[p]->left==NULL){
                    nodes[p]->left=nodes[i];
                }
                else{
                    nodes[p]->right=nodes[i];
                }
            }
        }
        return root;
    }
};
