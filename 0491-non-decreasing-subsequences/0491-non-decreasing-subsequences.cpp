class Solution {
public:
    vector<vector<int>> res;
    vector<int> temp;

    void solve(vector<int>&nums, int start){
        if(temp.size()>=2) res.push_back(temp);

        unordered_set<int> used;

        for(int i=start;i<nums.size();i++){
            if(!temp.empty() && nums[i]<temp.back()) continue;

            if(used.count(nums[i])) continue;

            used.insert(nums[i]);
            temp.push_back(nums[i]);
            solve(nums, i+1);
            temp.pop_back();
        }
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        solve(nums, 0);
        return res;
    }
};