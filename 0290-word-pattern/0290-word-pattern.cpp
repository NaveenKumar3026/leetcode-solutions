class Solution {
public:
    bool wordPattern(string pattern, string s) {
        stringstream ss(s);
        vector<string> words;
        string word;

        while(ss >> word){
            words.push_back(word);
        }

        if(pattern.size()!=words.size()) return false;
        unordered_map<char, string> m1;
        unordered_map<string, char> m2;

        for(int i=0;i<pattern.size();i++){
            char ch=pattern[i];
            word=words[i];

            if(m1.count(ch)){
                if(m1[ch]!=word) return false;
            }
            else m1[ch]=word;

            if(m2.count(word)){
                if(m2[word]!=ch) return false;
            }
            else m2[word]=ch;
        }
        return true;
    }
};