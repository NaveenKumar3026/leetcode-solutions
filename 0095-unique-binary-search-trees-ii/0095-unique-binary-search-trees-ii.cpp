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
    vector<TreeNode*> solve(int start, int end){
        if(start>end) return {nullptr};

        vector<TreeNode*> res;
        for(int root=start;root<=end;root++){
            vector<TreeNode*> lefttrees=solve(start, root-1);
            vector<TreeNode*> righttrees=solve(root+1, end);

            for(TreeNode* left: lefttrees){
                for(TreeNode* right: righttrees){
                    TreeNode* node = new TreeNode(root);
                    node->left=left;
                    node->right=right;

                    res.push_back(node);
                }
            }
        }
        return res;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(n==0) return {};
        return solve(1,n);
    }
};