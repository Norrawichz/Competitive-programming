/* A binary tree node has data, pointer to left child
   and a pointer to right child
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */

// Class Solution
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if (root == nullptr) return 0;
        
        int ans=0;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node *cur=q.front();
            q.pop();
            
            if (cur->left == nullptr && cur->right == nullptr) ans++;
            if (cur->left != nullptr) q.push(cur->left);
            if (cur->right != nullptr) q.push(cur->right);
        }
        return ans;
    }
};