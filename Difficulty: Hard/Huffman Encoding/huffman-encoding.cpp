class Solution {
  public:
  
      class Node{
          public:
              
            char data;
            int freq;
            int index;
            Node *left;
            Node *right;
              
             Node(char d,int f,int i){
                data=d;
                freq=f;
                index=i;
                left=right=NULL;
            }
       };
       
       struct compare{
           bool operator()(Node *a,Node* b){
               if(a->freq!=b->freq)
                   return a->freq > b->freq; 
                return a->index > b->index;
         }
      };
      
    void solve(Node *root,string code,vector<string> &ans){
        
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL){
            
            if (code=="") code="0";
            ans.push_back(code);
            return;
        }
        
        solve(root->left,code + "0",ans);
        solve(root->right,code + "1",ans);
    }
       
    vector<string> huffmanCodes(string &s, vector<int> f) {
        // code here
        priority_queue<Node*,vector<Node*>,compare> pq;
        
        for(int i=0;i<s.size();i++){
            pq.push(new Node(s[i],f[i],i));
        }
        
        while(pq.size()>1){
            Node *left=pq.top();
            pq.pop();
            
            Node* right=pq.top();
            pq.pop();
            
            Node *parent=new Node('$',left->freq+right->freq,min(left->index,right->index));
            
            parent->left=left;
            parent->right=right;
            
            pq.push(parent);
        }
        
        Node *root=pq.top();
        
        vector<string> ans;
        
        solve(root,"",ans);
        
        return ans;
    }
};