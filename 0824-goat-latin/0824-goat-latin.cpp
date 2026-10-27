class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, result;
        string vowels = "aeiouAEIOU";
        string suffix = "";

        int index = 1;

        while (ss >> word) {
            if (vowels.find(word[0]) == string::npos) {
                char first = word[0];
                word.erase(0, 1);
                word += first;
            }

            word += "ma";
            suffix += "a";
            word += suffix;

            if (!result.empty()) {
                result += " ";
            }

            result += word;
            index++;
        }

        return result;
    }
};