1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x<0) return false;
5        int x1=x, rev=0, a;
6        while(x1>0){
7            a=x1%10;
8            if(rev>INT_MAX/10) return false;
9            rev*=10;
10            rev+=a;
11            x1/=10;
12        }
13        if(x==rev) return true;
14        return false;
15    }
16};