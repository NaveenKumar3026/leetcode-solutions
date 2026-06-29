class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> map;
        int sum=0;
        map[0]=-1;
        int res=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) sum--;
            else sum++;

            if(map.find(sum)!=map.end()){
                res = max(res, i-map[sum]);
            }else map[sum]=i;
        }
        return res;
    }
};