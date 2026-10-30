class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int lines = 1;
        int pixels = 0;

        for (char c : s) {
            int w = widths[c - 'a'];

            if (pixels + w > 100) {
                lines++;
                pixels = w;
            }
            else {
                pixels += w;
            }
        }

        return {lines, pixels};
    }
};