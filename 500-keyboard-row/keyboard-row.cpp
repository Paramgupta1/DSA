class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        for (string word : words) {
            int row = 0;
            bool valid = true;

            for (char c : word) {
                c = tolower(c);

                int curr;
                if (row1.find(c) != string::npos)
                    curr = 1;
                else if (row2.find(c) != string::npos)
                    curr = 2;
                else
                    curr = 3;

                if (row == 0)
                    row = curr;
                else if (row != curr) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};