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
    int minvalue;
    long long findSecond(TreeNode* root){
        if(root==nullptr) return -1;

        if(root->val>minvalue) return root->val;

        long long left = findSecond(root->left);
        long long right = findSecond(root->right);

        if(left==-1) return right;
        if(right==-1)  return left;

        return min(left, right);
    }
    int findSecondMinimumValue(TreeNode* root) {
        minvalue=root->val;

        return (int)findSecond(root);
    }
};