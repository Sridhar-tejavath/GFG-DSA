/* Structure of binary Tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
  
    void serialize(Node *root,vector<string> &s){
        
        if(root==NULL) {
            s.push_back("#");
            return;
        }
        
        s.push_back(to_string(root->data));
        
        serialize(root->left,s);
        serialize(root->right,s);
    }
    
    bool isSubTree(Node *root1, Node *root2) {
        // code here
        vector<string> text,pattern;
        
        serialize(root1,text);
        serialize(root2,pattern);
        
        // build lps array
        
        int len=0;
        int i=1;
        
        vector<int> lps(pattern.size(),0);
        while(i<pattern.size()){
            if(pattern[i]==pattern[len]){
                len++;
                lps[i]=len;
                i++;
            }
            else{
                if(len!=0){
                    len=lps[len-1];
                }
                else{
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        // kmp search
        
        i=0;
        int j=0;
        while(i<text.size()){
            if(text[i]==pattern[j]){
                i++;
                j++;
                
                if(j==pattern.size()) return true;
            }
            
            else{
                if(j!=0){
                    j=lps[j-1];
                }
                else{
                    i++;
                }
            }
        }
        
        return false;
        
    }
};