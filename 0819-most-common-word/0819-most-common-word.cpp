class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet;

        for (string word : banned) {
            bannedSet.insert(word);
        }

        unordered_map<string, int> freq;

        string word = "";
        string res = "";
        int maxFreq = 0;

        paragraph += " ";

        for (char c : paragraph) {

            if (isalpha(c)) {
                word += tolower(c);
            }
            else {

                if (!word.empty()) {

                    if (bannedSet.find(word) == bannedSet.end()) {

                        freq[word]++;

                        if (freq[word] > maxFreq) {
                            maxFreq = freq[word];
                            res = word;
                        }
                    }

                    word = "";
                }
            }
        }

        return res;
    }
};