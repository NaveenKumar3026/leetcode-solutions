class Solution {
public:
    void backtrack(vector<vector<int>>& res,
        vector<int>& curr,
        vector<bool>& used, vector<int>& nums){
            if(curr.size()==nums.size()){
                res.push_back(curr);
                return;
            }
            for(int i=0;i<nums.size();i++){
                if(used[i]) continue;
                if(i>0 && nums[i]==nums[i-1] && !used[i-1]) continue;
                used[i]=true;
                curr.push_back(nums[i]);
                backtrack(res, curr, used, nums);
                curr.pop_back();
                used[i]=false;
            }
        }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        vector<bool> used(nums.size(), false);
        backtrack(res, curr, used, nums);
        return res;
    }
};