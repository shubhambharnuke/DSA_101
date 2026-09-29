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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;

        queue<TreeNode*>q1;
        q1.push(root);
        int count=2;
        while(!q1.empty())
        {
            vector<int> level;
            int n=q1.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q1.front();
                level.push_back(node->val);
                q1.pop();
                
                if(node->left!=NULL)
                    q1.push(node->left);
                if(node->right!=NULL)
                    q1.push(node->right);
            }
            if(count%2==0)
            {
                ans.push_back(level);
            }
            else
            {
                reverse(level.begin(),level.end());
                ans.push_back(level);
            }
            count++;
        }
        return ans;
    }
};