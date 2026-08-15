class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int left = 0;
        int used = 0;
        int ans = 0;

        for (int right = 0; right < nums.size(); right++) {

            while ((used & nums[right]) != 0) {
                used ^= nums[left];
                left++;
            }

            used |= nums[right];

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};