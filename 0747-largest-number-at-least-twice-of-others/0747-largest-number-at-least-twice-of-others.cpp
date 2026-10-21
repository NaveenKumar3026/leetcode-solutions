class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int largest = 0;
        int secondLargest = -1;
        int index = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
                index = i;
            } else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }

        if (largest >= 2 * secondLargest) {
            return index;
        }

        return -1;
    }
};