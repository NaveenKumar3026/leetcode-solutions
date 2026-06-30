class Solution {
public:
    int power(int a, int b){
        int val=1;
        a%=1337;

        while(b>0){
            if(b%2) val = (val*a)%1337;
            a = (a*a)%1337;

            b/=2;
        }
        return val;
    }
    int superPow(int a, vector<int>& b) {
        if(b.empty()) return 1;
        int last=b.back();
        b.pop_back();

        return (power(superPow(a,b),10)*power(a,last))%1337;
    }
};