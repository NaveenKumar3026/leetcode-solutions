class Solution {
public:

    void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<bool>& used, vector<int>& nums){
        if(curr.size()==nums.size()){
            res.push_back(curr);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(used[i]) continue;
            used[i]=true;
            curr.push_back(nums[i]);
            backtrack(res, curr, used, nums);
            curr.pop_back();
            used[i]=false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        vector<bool> used(nums.size(), false);

        backtrack(res, curr, used, nums);
        return res;
    }
};

