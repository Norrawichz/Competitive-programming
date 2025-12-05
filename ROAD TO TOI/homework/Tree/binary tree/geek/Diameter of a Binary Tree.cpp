/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    int mx=0;
    
    int dfs(Node* cur) {
        
        if (cur->left != nullptr && cur->right != nullptr) {
            int n1=dfs(cur->left)+1, n2=dfs(cur->right)+1;
            mx = max(mx, n1+n2);
            return max(n1, n2); 
        }
        else if (cur->left != nullptr) {
            return dfs(cur->left)+1;
        }
        else if (cur->right != nullptr) {
            return dfs(cur->right)+1;
        }
        return 0;
    }
    
    int diameter(Node* root) {
        // code here
        int i = dfs(root);
        return max(i, mx);
    }
};