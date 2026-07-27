class Solution {
public:
    bool canMeasureWater(int x, int y, int target) {
        if(target>x+y) return false;

        if(target==0) return true;

        if(target % gcd(x,y)==0) return true;
        return false;
    }
};