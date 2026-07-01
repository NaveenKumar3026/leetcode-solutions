class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char, int> freq;

        for(char c: t){
            freq[c]++;
        }
        for(char c: s){
            freq[c]--;
        }
        for (auto var : freq) {   
            if (var.second == 1) return var.first;
        }
        return ' ';
    }
};