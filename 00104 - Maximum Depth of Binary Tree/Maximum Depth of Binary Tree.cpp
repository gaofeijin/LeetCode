/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
            return 0;
        else if(root->left == NULL && root-> right ==NULL)
            return 1;
        else
        {
            int dl = maxDepth(root->left);
            int dr = maxDepth(root->right);
            return ( dl>dr ) ? (dl+1) : (dr+1);
        }
    }
};