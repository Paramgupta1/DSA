class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_map<string, int> freq;
        unordered_set<string> ban(banned.begin(), banned.end());

        string word = "";

        for (int i = 0; i <= paragraph.length(); i++) {
            char c = (i < paragraph.length()) ? tolower(paragraph[i]) : ' ';

            if (isalpha(c)) {
                word += c;
            }
            else {
                if (word != "" && ban.find(word) == ban.end()) {
                    freq[word]++;
                }
                word = "";
            }
        }

        string ans = "";
        int maxi = 0;

        for (auto it : freq) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};