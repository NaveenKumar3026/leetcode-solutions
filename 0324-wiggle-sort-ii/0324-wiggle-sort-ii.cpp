class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> nums1=nums;
        sort(nums1.begin(), nums1.end());
        int n=nums.size();

        int left=(n-1)/2;
        int right=n-1;
        for(int i=0;i<n;i++){
            if(i%2==0) nums[i]=nums1[left--];
            else nums[i]=nums1[right--];
        }
    }
};