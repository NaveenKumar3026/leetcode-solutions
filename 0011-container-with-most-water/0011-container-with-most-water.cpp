class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0, left=0, right = height.size()-1;
        while(left<right){
            int n = min(height[left], height[right]);
            int k=right-left;
            m = max(m, n*k);

            if(height[left]<height[right]) left++;
            else right--;
        }
        
        return m;
    }
};