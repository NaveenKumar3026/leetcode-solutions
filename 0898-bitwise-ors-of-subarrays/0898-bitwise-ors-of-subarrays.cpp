class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int> res;
        unordered_set<int> prev;

        for(int x: arr){
            unordered_set<int> curr;

            curr.insert(x);

            for(int val: prev) curr.insert(val | x);

            prev=curr;

            for(int val: curr) res.insert(val);
        }
        return res.size();
    }
};