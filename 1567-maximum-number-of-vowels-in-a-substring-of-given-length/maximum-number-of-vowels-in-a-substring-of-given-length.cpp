class Solution {
public:
    int maxVowels(string s, int k) {
        int count = 0;
        int ans = 0;

        // Count vowels in the first window
        for (int i = 0; i < k; i++) {
            if (isVowel(s[i]))
                count++;
        }

        ans = count;

        // Slide the window
        for (int i = k; i < s.size(); i++) {

            // Add incoming character
            if (isVowel(s[i]))
                count++;

            // Remove outgoing character
            if (isVowel(s[i - k]))
                count--;

            ans = max(ans, count);
        }

        return ans;
    }

    bool isVowel(char ch) {
        return ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u';
    }
};