class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morse={
            ".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."
        };

        unordered_set<string> set;

        for(string word: words){
            string code="";
            for(char ch: word){
                code+=morse[ch-'a'];
            }
            set.insert(code);
        }
        return set.size();
    }
};