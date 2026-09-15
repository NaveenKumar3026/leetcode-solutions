class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0;
        int high=numbers.size()-1;

        while(low<high){
            int val=numbers[low]+numbers[high];

            if(val==target) return {low+1, high+1};

            if(val<target) low++;
            else high--;
        }
        return {};
    }
};