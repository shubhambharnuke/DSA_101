class Solution {
public:
    bool isMirror(TreeNode* left, TreeNode* right) {
        // Both are NULL → symmetric
        if (left == NULL && right == NULL)
            return true;

        // One is NULL → not symmetric
        if (left == NULL || right == NULL)
            return false;

        // Values must match
        if (left->val != right->val)
            return false;

        // Outer nodes + inner nodes must be mirrors
        return isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }

    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;

        return isMirror(root->left, root->right);
    }
};