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
    int goodNodes(TreeNode* root) {
        int cnt=1;
        if (root == nullptr) return 0;

        queue<pair<TreeNode*, int>> q;
        q.push({root, root->val});

        while (!q.empty()) {
            TreeNode* cur = q.front().first;
            int cmx=q.front().second;
            q.pop();

            if (cur->left != nullptr) {
                if (cmx <= cur->left->val) cnt++;
                q.push({cur->left, max(cmx, cur->left->val)});
            }
            if (cur->right != nullptr) {
                if (cmx <= cur->right->val) cnt++;
                q.push({cur->right, max(cmx, cur->right->val)});
            }
        }
        return cnt;
    }
};