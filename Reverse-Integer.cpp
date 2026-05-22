1class Solution {
2public:
3    int reverse(int x) {
4        if(x==INT_MIN) return 0;
5        int rev=0, x1 = x, a, count;
6        if(x<0){
7            x1 *= -1;
8        }
9        while(x1>0){
10            a = x1%10;
11            if(a!=0 || count!=0){
12                if(rev > INT_MAX/10) return 0;
13                rev*=10;
14                rev+=a;
15                count++;
16            }
17            x1/=10;
18        }
19        if(x<0) rev *= -1;
20        if(rev> pow(2,31)*-1 && rev< pow(2,31)-1){
21            return rev;
22        }
23        return 0;
24    }
25};