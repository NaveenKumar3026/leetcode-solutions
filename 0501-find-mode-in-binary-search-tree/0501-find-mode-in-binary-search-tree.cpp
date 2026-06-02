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
    void inorder(TreeNode* root, unordered_map<int, int>& freq){
        if(root){
            freq[root->val]++;
            inorder(root->left, freq);
            inorder(root->right, freq);
        }
    }
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> freq;
        inorder(root, freq);
        int max_count=0;
        for(auto it: freq){
            max_count=max(it.second, max_count);
        }
        vector<int> res;
        for(auto it: freq){
            if(max_count==it.second) res.push_back(it.first);
        }
        return res;
    }
};