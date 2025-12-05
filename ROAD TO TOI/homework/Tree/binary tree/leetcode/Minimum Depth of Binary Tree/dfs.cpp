/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode *cur) {
        int mn=1000000;

        if (cur->left != nullptr) mn = min(mn, dfs(cur->left)+1);
        if (cur->right != nullptr) mn = min(mn, dfs(cur->right)+1);
        if (cur->right == nullptr && cur->left == nullptr) mn = min(mn, 1);
        return mn;
    }
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        if (root->right == nullptr && root->left == nullptr) return 1;
        return dfs(root);
    }
};