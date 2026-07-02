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
    int height(TreeNode* root){
        if(root == NULL) return 0;
        int left = 0;
        if(root->left) left = height(root->left);
        int right = 0;
        if(root->right) right = height(root->right);
        return 1 + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(!root) return true;
        int leftH = 0;
        if(root->left) leftH = height(root->left);
        int rightH = 0;
        if(root->right) rightH = height(root->right);

        if(abs(leftH- rightH) > 1) return false;
        return isBalanced(root->left) && isBalanced(root->right);
    }
};
