class Solution {
public:
    string arrangeWords(string text) {
        stringstream ss(text);
        vector<string> words;
        string word;

        while (ss >> word) {
            words.push_back(word);
        }

        words[0][0] = tolower(words[0][0]);

        stable_sort(words.begin(), words.end(),
            [](string a, string b) {
                return a.length() < b.length();
            });

        words[0][0] = toupper(words[0][0]);

        string res = "";

        for (int i = 0; i < words.size(); i++) {
            if (i > 0)
                res += " ";

            res += words[i];
        }

        return res;
    }
};