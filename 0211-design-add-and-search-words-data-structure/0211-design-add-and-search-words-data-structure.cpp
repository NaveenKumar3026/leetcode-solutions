class WordDictionary {
private:

    struct TrieNode {
        TrieNode* children[26];
        bool isEnd;

        TrieNode() {
            isEnd = false;

            for (int i = 0; i < 26; i++) {
                children[i] = nullptr;
            }
        }
    };

    TrieNode* root;

    bool dfs(TrieNode* node, string& word, int index) {

        if (index == word.length()) {
            return node->isEnd;
        }

        char c = word[index];

        if (c != '.') {
            int idx = c - 'a';

            if (node->children[idx] == nullptr) {
                return false;
            }

            return dfs(node->children[idx], word, index + 1);
        }

        // '.' can match any character
        for (int i = 0; i < 26; i++) {

            if (node->children[i] != nullptr) {

                if (dfs(node->children[i], word, index + 1)) {
                    return true;
                }
            }
        }

        return false;
    }

public:

    WordDictionary() {
        root = new TrieNode();
    }

    void addWord(string word) {

        TrieNode* curr = root;

        for (char c : word) {

            int idx = c - 'a';

            if (curr->children[idx] == nullptr) {
                curr->children[idx] = new TrieNode();
            }

            curr = curr->children[idx];
        }

        curr->isEnd = true;
    }

    bool search(string word) {
        return dfs(root, word, 0);
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */