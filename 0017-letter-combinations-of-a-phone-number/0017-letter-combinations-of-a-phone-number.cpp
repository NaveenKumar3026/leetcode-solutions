class Solution {
public:
    void backtrack(int idx, string curr, vector<string>& res, string& digits, unordered_map<char, string>& ph){
        if(idx==digits.size()){
            res.push_back(curr);
            return;
        }
        string value=ph[digits[idx]];

        for(char ch: value){
            backtrack(idx+1, curr+ch, res, digits, ph);
        }
    }
    vector<string> letterCombinations(string digits) {

        if (digits.empty()) return {};
        vector<string> res;
        string curr;

        unordered_map<char, string> ph;
        ph['2']="abc";
        ph['3']="def";
        ph['4']="ghi";
        ph['5']="jkl";
        ph['6']="mno";
        ph['7']="pqrs";
        ph['8']="tuv";
        ph['9']="wxyz";

        backtrack(0, "", res, digits, ph);
    return res;
    }

    
};