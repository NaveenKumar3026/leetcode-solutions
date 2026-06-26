class Solution {
public:
    int integerReplacement(int num) {
        long long n=num;
        int steps=0;

        while(n!=1){
            if(n%2==0) n/=2;
            else{
                if(n==3 || (n&2)==0) n--;
                else n++;
            }
            steps++;
        }
        return steps;

    }
};