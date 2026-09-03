class MagicDictionary {
private:
    unordered_set<string> dictionary_set;

public:
    MagicDictionary() {
    }

    void buildDict(vector<string> dictionary) {
        for (string word : dictionary) {
            dictionary_set.insert(word);
        }
    }

    bool search(string searchWord) {
        for (const string& word : dictionary_set) {
            if (word.length() != searchWord.length()) {
                continue;
            }
            int diff = 0;
            for (int i = 0; i < word.length(); i++) {
                if (word[i] != searchWord[i]) {
                    diff++;
                    if (diff > 1) {
                        break;
                    }
                }
            }
            if (diff == 1) {
                return true;
            }
        }

        return false;
    }
};