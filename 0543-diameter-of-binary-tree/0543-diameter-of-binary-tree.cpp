/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int dia = 0;
    int diameterOfBinaryTree(TreeNode* root) {
        fun(root);
        return dia;
    }
    int fun(TreeNode* node) {
        if (node == NULL)
            return 0;
        int lh = fun(node->left);
        int rh = fun(node->right);
        dia = max(dia, (lh + rh));
        return 1 + max(lh, rh);
    }
};