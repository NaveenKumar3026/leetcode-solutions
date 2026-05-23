1class Solution {
2public:
3    string longestCommonPrefix(vector<string>& strs) {
4        if(strs.empty()) return "";
5        sort(strs.begin(), strs.end());
6        string first=strs[0];
7        string last=strs[strs.size()-1];
8        
9        int i=0;
10        while(i<first.length() && i<last.length() && first[i]==last[i]){
11            i++;
12        }
13        return first.substr(0, i);
14    }
15};