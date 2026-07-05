class Solution {
public:
    vector<int> prefix;
    int total;
    Solution(vector<int>& w) {
        total=0;
        for(int val: w){
            total+=val;
            prefix.push_back(total);
        }
    }
    
    int pickIndex() {
        int val=rand()%total+1;
        return lower_bound(prefix.begin(), prefix.end(), val)-prefix.begin();
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(w);
 * int param_1 = obj->pickIndex();
 */