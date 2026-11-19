class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
         vector<vector<int>> ans;

        int n = s.length();
        int i = 0;

        while (i < n) {

            int start = i;

            // Find the end of the current group
            while (i < n && s[i] == s[start]) {
                i++;
            }

            int end = i - 1;

            // Check whether group size is at least 3
            if (end - start + 1 >= 3) {
                ans.push_back({start, end});
            }
        }

        return ans;
    }
};