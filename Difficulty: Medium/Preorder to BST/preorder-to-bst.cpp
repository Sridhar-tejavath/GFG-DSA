/* Structure of a Tree Node
class Node {
  public:
    int data;
    Node *left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    Node* preToBST(vector<int>& pre) {
        // code here
        if(pre.size()==0) return NULL;
        
        Node *root=new Node(pre[0]);
        
        stack<Node*> st;
        st.push(root);
        
        for(int i=1;i<pre.size();i++){
            Node *temp=NULL;
            while(!st.empty() && pre[i]>st.top()->data){
                temp=st.top();
                st.pop();
            }
            
            Node *curr=new Node(pre[i]);
            
            if(temp!=NULL){
                temp->right=curr;
            }
            else{
                st.top()->left=curr;
            }
            
            st.push(curr);
        }
        
        return root;
    }
};