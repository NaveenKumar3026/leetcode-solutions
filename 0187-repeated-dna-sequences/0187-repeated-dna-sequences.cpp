class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> freq;
        vector<string> res;
        for(int i=0;i<=s.size();i++){
            string str=s.substr(i, 10);
            freq[str]++;
            if(freq[str]==2){
                res.push_back(str);
            }
        }
        return res;
    }
};