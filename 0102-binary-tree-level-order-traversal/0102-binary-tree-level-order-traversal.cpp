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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> sol;
        if(root==NULL) return sol;
        queue<TreeNode*>q1;
        q1.push(root);
        while(!q1.empty())
        {
            vector<int>val;
            int size=q1.size();
            for(int i=0;i<size;i++)
            {
                TreeNode* node=q1.front();
                q1.pop();
                if(node->left!=NULL) q1.push(node->left);
                if(node->right!=NULL) q1.push(node->right);
                val.push_back(node->val);
            }
            sol.push_back(val);
        }
        return sol;
    }
};