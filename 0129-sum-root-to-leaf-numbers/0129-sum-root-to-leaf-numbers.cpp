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
    void total(TreeNode* root, int& sum, int curr){
        if(root==nullptr) return;
        curr  = curr*10+root->val;
        if(root->left==nullptr && root->right==nullptr){
            sum+=curr;
            return;
        }
        total(root->left, sum, curr);
        total(root->right, sum, curr);
    }
    int sumNumbers(TreeNode* root) {
        int sum=0;
        total(root, sum, 0);
        return sum;
    }
};