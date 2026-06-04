class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<int> score;
        for(int n: nums){
            score.push_back(n);
        }
        sort(score.begin(), score.end());
        int n=nums.size();
        vector<string> res;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==score[n-1]) res.push_back("Gold Medal");
            else if(nums[i]==score[n-2]) res.push_back("Silver Medal");
            else if(nums[i]==score[n-3]) res.push_back("Bronze Medal");
            else{
                for(int j=0;j<n;j++){
                    if(nums[i]==score[j]){
                        res.push_back(to_string(n-j));
                        break;
                    } 
                }
            }
        }
        return res;
    }
};