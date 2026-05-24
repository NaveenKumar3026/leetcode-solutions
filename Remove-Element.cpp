1class Solution {
2public:
3    int removeElement(vector<int>& nums, int val) {
4        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
5        return nums.size();
6    }
7};