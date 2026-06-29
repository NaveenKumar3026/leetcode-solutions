class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        map[0]=1;

        int currsum=0;
        int count=0;

        for(int num: nums){
            currsum+=num;
            if(map.find(currsum-k)!=map.end()){
                count+=map[currsum-k];
            }
            map[currsum]++;
        }
        return count;
    }
};