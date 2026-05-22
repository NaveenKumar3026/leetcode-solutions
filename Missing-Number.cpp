1class Solution {
2public:
3    int missingNumber(vector<int>& nums) {
4        map<int,int> freq;
5
6        for(int i=0; i<=nums.size();i++){
7            freq[i]=0;
8        }
9        for(int num: nums){
10            freq[num]++;
11        }
12        for(auto it: freq){
13            if(it.second==0) return it.first;
14        }
15        return -1;
16    }
17};