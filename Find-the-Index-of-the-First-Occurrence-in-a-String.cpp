1class Solution {
2public:
3    int strStr(string haystack, string needle) {
4        int n=needle.length();
5        int m=haystack.length();
6        for(int i=0; i<m; i++){
7            if(m-i>=n){
8                if(haystack.substr(i, n)==needle) return i;
9            }else break;
10        }
11        return -1;
12    }
13};