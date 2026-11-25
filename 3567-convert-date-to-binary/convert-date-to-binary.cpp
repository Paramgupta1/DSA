class Solution {
public:
    string convertDateToBinary(string date) {
        string ans = "";
        int num = 0;

        for (char c : date) {
            if (c == '-') {
                ans += toBinary(num) + "-";
                num = 0;
            } else {
                num = num * 10 + (c - '0');
            }
        }

        ans += toBinary(num);
        return ans;
    }

    string toBinary(int n) {
        if (n == 0) return "0";

        string res = "";

        while (n > 0) {
            res = char('0' + n % 2) + res;
            n /= 2;
        }

        return res;
    }
};