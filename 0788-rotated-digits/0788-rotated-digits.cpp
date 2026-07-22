class Solution {
public:
    bool isGood(int val){
        bool res=false;
        while(val>0){
            int digit = val%10;
            if(digit==3||digit==4||digit==7) return false;
            if(digit==2||digit==5||digit==6||digit==9) res=true;

            val/=10;
        }
        return res;
    }
    int rotatedDigits(int n) {
        int count=0;

        for(int i=1;i<=n;i++){
            if(isGood(i)) count++;
        }
        return count;
    }
};