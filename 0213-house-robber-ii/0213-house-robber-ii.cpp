class Solution {
public:

    int robValue(vector<int>& nums, int start, int end){
        int prev2=0;
        int prev1=0;

        for(int i=start;i<=end;i++){
            int val=max(prev1, nums[i]+prev2);
            prev2=prev1;
            prev1=val;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
        int n=nums.size();

        if(n==1) return nums[0];

        int ch1=robValue(nums, 0, n-2);
        int ch2=robValue(nums, 1, n-1);

        return max(ch1, ch2);
    }
};