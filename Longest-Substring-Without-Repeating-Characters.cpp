1class Solution {
2public:
3    int lengthOfLongestSubstring(string s) {
4        vector<int> lastIndex(256, -1); 
5        int maxLen = 0;
6        int start = 0;
7
8        for (int i = 0; i < s.length(); i++) {
9            char ch = s[i];
10
11            if (lastIndex[ch] >= start) {
12                start = lastIndex[ch] + 1;
13            }
14            lastIndex[ch] = i;
15            maxLen = max(maxLen, i - start + 1);
16        }
17        return maxLen;
18    }
19};