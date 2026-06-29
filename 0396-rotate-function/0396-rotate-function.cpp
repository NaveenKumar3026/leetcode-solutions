class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n=nums.size();

        long long f=0;
        long long sum=0;


        for(int i=0;i<n;i++){
            sum+=nums[i];
            f+=1LL*i*nums[i];
        }

        long long val=f;

        for(int i=1;i<nums.size();i++){
            f = f+sum-1LL*nums[n-i]*n;
            val=max(f, val);
        }
        return val;
    }
};