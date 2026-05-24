1class Solution {
2public:
3    vector<vector<int>> fourSum(vector<int>& nums, int target) {
4        vector<vector<int>> result;
5        int n = nums.size();
6        if (n < 4) return result;
7        sort(nums.begin(), nums.end());
8        for (int i = 0; i < n - 3; i++) {
9            if (i > 0 && nums[i] == nums[i - 1]) continue;
10            for (int j = i + 1; j < n - 2; j++) {
11                if (j > i + 1 && nums[j] == nums[j - 1]) continue;
12                int left = j + 1;
13                int right = n - 1;
14                while (left < right) {
15                   long long int sum =(long long int) nums[i] + nums[j] + nums[left] + nums[right];
16                    if (sum == target) {
17                        result.push_back({nums[i], nums[j], nums[left], nums[right]});
18                        while (left < right && nums[left] == nums[left + 1]) left++;
19                        while (left < right && nums[right] == nums[right - 1]) right--;
20                        left++;
21                        right--;
22                }
23                else if (sum < target) left++;
24                else right--;
25            }
26        }
27    }
28    return result;
29    }
30};