class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> map;
        stack<int> st;

        for(int i=nums2.size()-1;i>=0;i--){
            while(!st.empty() && st.top()<=nums2[i]){
                st.pop();
            } 

            if(st.empty()) map[nums2[i]]=-1;
            else map[nums2[i]]=st.top();

            st.push(nums2[i]);
        }
        vector<int> res;
        for(int num: nums1){
            res.push_back(map[num]);
        }
        return res;
    }
};