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
    unordered_map<long, long> map;
    int ans;

    void dfs(TreeNode* root, long long curr, int target){
        if(root==nullptr) return;

        curr+=root->val;

        if(map.count(curr-target)) ans += map[curr-target];

        map[curr]++;

        dfs(root->left, curr, target);
        dfs(root->right, curr, target);

        map[curr]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        map[0]=1;
        dfs(root, 0, targetSum);
        return ans;
    }
};