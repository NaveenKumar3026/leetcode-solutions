class Solution {
public:
    void backtrack(vector<vector<int>>& res, vector<int>& nums,int start, vector<int>& curr){
        res.push_back(curr);

        for(int i=start;i<nums.size();i++){
            if(i>start && nums[i]==nums[i-1]) continue;
            curr.push_back(nums[i]);
            backtrack(res, nums, i+1, curr);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        backtrack(res, nums, 0, curr);
        return res;
    }
};