class Solution {
public:
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> res;

        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(__builtin_popcount(i)+__builtin_popcount(j)==turnedOn){
                    string time = to_string(i)+":";
                    if(j<10) time+="0";
                    time+=to_string(j);

                    res.push_back(time);
                }
            }
        }
        return res;
    }
};