class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        if (root == NULL)
            return ans;

        stack<TreeNode*> st1;
        stack<TreeNode*> st2;

        st1.push(root);

        while (!st1.empty() || !st2.empty()) {
            
            vector<int> level;

            // Left to Right
            while (!st1.empty()) {
                TreeNode* node = st1.top();
                st1.pop();

                level.push_back(node->val);

                // Push left first, then right
                // so that right comes out first in st2
                if (node->left)
                    st2.push(node->left);

                if (node->right)
                    st2.push(node->right);
            }

            if (!level.empty())
                ans.push_back(level);

            level.clear();

            // Right to Left
            while (!st2.empty()) {
                TreeNode* node = st2.top();
                st2.pop();

                level.push_back(node->val);

                // Push right first, then left
                // so that left comes out first in st1
                if (node->right)
                    st1.push(node->right);

                if (node->left)
                    st1.push(node->left);
            }

            if (!level.empty())
                ans.push_back(level);
        }

        return ans;
    }
};