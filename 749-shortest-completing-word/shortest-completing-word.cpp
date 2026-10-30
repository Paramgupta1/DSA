class Solution {
public:
    string shortestCompletingWord(string licensePlate, vector<string>& words) {
        int freq[26] = {0};

        for (char c : licensePlate) {
            if (isalpha(c)) {
                freq[tolower(c) - 'a']++;
            }
        }

        string ans = "";

        for (string word : words) {
            int temp[26] = {0};

            for (char c : word) {
                temp[c - 'a']++;
            }

            bool valid = true;

            for (int i = 0; i < 26; i++) {
                if (temp[i] < freq[i]) {
                    valid = false;
                    break;
                }
            }

            if (valid && (ans == "" || word.length() < ans.length())) {
                ans = word;
            }
        }

        return ans;
    }
};