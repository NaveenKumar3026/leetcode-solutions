class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(string op: operations){
            if(op=="++X" || op=="X++") x+=1;
            if(op=="--X" || op=="X--") x-=1;
        }
        return x;
    }
};