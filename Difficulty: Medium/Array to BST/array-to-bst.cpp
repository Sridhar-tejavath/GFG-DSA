/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
  
    Node *convert(vector<int> &arr,int Start,int End){
        
        if(Start>End) return NULL;
        
        int mid=Start+(End-Start)/2;
        
        Node *root=new Node(arr[mid]);
        
        root->left=convert(arr,Start,mid-1);
        
        root->right=convert(arr,mid+1,End);
        
        return root;
        
        
    }
    Node* sortedArrayToBST(vector<int>& arr) {
        // code here
        
        return convert(arr,0,arr.size()-1);
        
    }
};