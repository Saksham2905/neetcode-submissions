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
    int solve(TreeNode* node, int &maxi){
        if(node == NULL) return 0;

        int left = 0;
        if(node->left != NULL){
            left = solve(node->left, maxi);
        }
        int right = 0;
        if(node->right != NULL){
            right = solve(node->right, maxi);
        }
        maxi = max(maxi, left+right);
        return 1 + max(left, right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int maxi = 0;
        int ans = solve(root, maxi);
        return maxi;
    }
};
