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
    int minDepth(TreeNode* root) {
        if (root == nullptr) return 0;
        
        queue<pair<TreeNode*,int>> q;
        q.push({root, 1});
        int ans=0;
        while (!q.empty()) {
            TreeNode *cur = q.front().first;
            int dist = q.front().second;

            q.pop();
            if (cur->left == nullptr && cur->right == nullptr) {
                ans=dist;
                break;
            }
            if (cur->left != nullptr) {
                q.push({cur->left, dist+1});
            }
            if (cur->right != nullptr) {
                q.push({cur->right, dist+1});
            }
        }
        return ans;
    }
};