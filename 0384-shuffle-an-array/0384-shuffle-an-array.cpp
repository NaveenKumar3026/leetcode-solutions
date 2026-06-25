class Solution {
public:
    vector<int> res;
    vector<int> arr;
    Solution(vector<int>& nums) {
        arr=nums;
        res=nums;
    }
    
    vector<int> reset() {
        res=arr;
        return res;
    }
    
    vector<int> shuffle() {
        res=arr;
        int n=arr.size();
        for(int i=0;i<n;i++){
            int j=rand()%(arr.size()-i) + i;
            swap(res[i], res[j]);
        }
        return res;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */