/* Linked List Node Structure
class Node {
  public:
    int data;
    Node* next;
    Node(int x){
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
  
    class compare{
        public:
          bool operator()(Node *a,Node *b){
              return a->data > b->data;
          }
    };
    
    Node* mergeKLists(vector<Node*>& arr) {
        // code here
        priority_queue<Node*,vector<Node*>,compare> pq;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i]!=NULL){
                pq.push(arr[i]);
            }
        }
        
        Node *dummy=new Node(0);
        Node *tail=dummy;
        
        while(!pq.empty()){
            Node *temp=pq.top();
            pq.pop();
            
            tail->next=temp;
            tail=temp;
            
            if(temp->next!=NULL){
                pq.push(temp->next);          
            }
        }
        
        return dummy->next;
    }
};