class Solution {
public:
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) {
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> s2(nums2.begin(), nums2.end());
        unordered_set<int> s3(nums3.begin(), nums3.end());

        unordered_set<int> comb;

        for(int n: nums1) comb.insert(n);
        for(int n: nums2) comb.insert(n);
        for(int n: nums3) comb.insert(n);

        vector<int> res;
        for(int n: comb){
            int count=0;
            if(s1.count(n)) count++;
            if(s2.count(n)) count++;
            if(s3.count(n)) count++;

            if(count>1) res.push_back(n);
        }

        return res;

    }
};