// User function Template for C++

class Solution {
  public:
    int countNodes(Node* root) {
        // Write your code here
        if (root == nullptr) return 0;
        
        int cnt=1;
        queue<Node*> q;
        q.push(root);
        while (!q.empty()) {
            Node *cur = q.front();
            q.pop();
            
            if (cur->left != nullptr) {q.push(cur->left); cnt++;}
            if (cur->right != nullptr) {q.push(cur->right); cnt++;}
        }
        return cnt;
    }
};