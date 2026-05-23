1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int m=0, left=0, right = height.size()-1;
5        while(left<right){
6            int n = min(height[left], height[right]);
7            int k=right-left;
8            m = max(m, n*k);
9
10            if(height[left]<height[right]) left++;
11            else right--;
12        }
13        
14        return m;
15    }
16};