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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> q1;
        q1.push(root);
        ans.push_back(root->val);
        while(!q1.empty())
        {
            bool status= false;
            int n=q1.size();
            for(int i=0;i<n;i++)
            {
                TreeNode* node=q1.front();
                if(!status)
                {
                    if(node->right!=NULL)
                    {
                        ans.push_back(node->right->val);
                        status=true;
                    }
                    else if(node->left!=NULL)
                    {
                        ans.push_back(node->left->val);
                        status=true;
                    }
                    if(node->right!=NULL)
                        q1.push(node->right);
                    if(node->left!=NULL)
                        q1.push(node->left);
                    q1.pop();
                }
                else
                {
                    if(node->right!=NULL)
                        q1.push(node->right);
                    if(node->left!=NULL)
                        q1.push(node->left);
                    q1.pop();
                }
            }
        }
        return ans;
    }
};