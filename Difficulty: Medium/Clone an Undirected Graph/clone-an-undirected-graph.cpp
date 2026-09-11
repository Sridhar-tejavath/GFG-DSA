/*
class Node {
  public:
    int val;
    vector<Node*> neighbors;

    Node() { val = 0; }

    Node(int val) { val = val; }

    Node(int val, vector<Node*> neighbors) {
        val = val;
        neighbors = neighbors;
    }
};
*/

class Solution {
  public:
  
    unordered_map<Node*,Node*> mp;
    Node* cloneGraph(Node* node) {
        // code here
        if(node==NULL) return NULL;
        
        if(mp.count(node))
            return mp[node];
        
        Node *newNode=new Node(node->val);
        mp[node]=newNode;
        
        for(auto neighbor:node->neighbors){
            newNode->neighbors.push_back(cloneGraph(neighbor));
        }
        
        return newNode;
    }
};
