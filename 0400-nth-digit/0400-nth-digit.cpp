class Solution {
public:
    int findNthDigit(int n) {
        long long len=1;
        long long start=1;
        long long count=9;

        while(n>count){
            n-=count;
            len++;
            start*=10;
            count=9*start*len;
        }

        long long val=start+(n-1)/len;

        string value=to_string(val);
        return value[(n-1)%len]-'0';
    }
};