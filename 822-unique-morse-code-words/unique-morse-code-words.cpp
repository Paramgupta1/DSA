class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        string morse[26] = {
            ".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
            "....", "..", ".---", "-.-", ".-..", "--", "-.",
            "---", ".--.", "--.-", ".-.", "...", "-", "..-",
            "...-", ".--", "-..-", "-.--", "--.."
        };

        unordered_set<string> st;

        for (string word : words) {
            string temp = "";

            for (char c : word) {
                temp += morse[c - 'a'];
            }

            st.insert(temp);
        }

        return st.size();
    }
};