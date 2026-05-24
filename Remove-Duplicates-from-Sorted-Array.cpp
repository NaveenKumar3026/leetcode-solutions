1class Solution {
2public:
3    int removeDuplicates(vector<int>& nums) {
4        if(nums.empty()) return 0;
5        int i=0;
6        while(i<nums.size()-1){
7            if(nums[i]==nums[i+1])
8                nums.erase(nums.begin() + i + 1);
9            else i++;
10        }
11        return nums.size();
12    }
13};