1class Solution {
2public:
3    vector<vector<int>> threeSum(vector<int>& nums) {
4        vector<vector<int>> arr;
5        int n=nums.size();
6        sort(nums.begin(), nums.end());
7        if(nums.size()>=3){
8            for(int i=0;i<nums.size()-2;i++){
9                if(i>0 && nums[i]==nums[i-1]) continue;
10                int left=i+1;
11                int right=n-1;
12                while(left<right){
13                    int sum= nums[i]+nums[left]+nums[right];
14                    if(sum==0) {
15                        arr.push_back({nums[i], nums[left], nums[right]});
16                        while (left < right && nums[left] == nums[left + 1]) left++;
17                        while (left < right && nums[right] == nums[right - 1]) right--;
18                        left++;
19                        right--;
20                    }
21                    else if (sum > 0) right--;
22                    else left++;
23                }
24            }
25        }
26        return arr;
27    }
28};