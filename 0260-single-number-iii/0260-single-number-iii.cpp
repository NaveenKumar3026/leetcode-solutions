class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {

        long long xorAll = 0;

        for (int num : nums) {
            xorAll ^= num;
        }

        long long diff = xorAll & (-xorAll);

        int a = 0;
        int b = 0;

        for (int num : nums) {

            if ((static_cast<long long>(num) & diff) != 0) {
                a ^= num;
            } else {
                b ^= num;
            }
        }

        return {a, b};
    }
};