class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int val: nums) freq[val]++;

        int res=0;
        for(auto it: freq){
            if(freq.count(it.first+1)){
                res = max(res, freq[it.first]+freq[it.first+1]);
            }
        }
        return res;
    }
};