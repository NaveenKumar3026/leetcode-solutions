class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int first=0, res=0;
        for(int n:nums){
            if(n==1){
                first++;
                res=max(res, first);
            }
            else first=0;
        }
        return res;
    }
};