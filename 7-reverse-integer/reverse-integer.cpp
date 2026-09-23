class Solution {
public:
    int reverse(int x) {
        int a = 0;

        while (x != 0) {
            int temp = x % 10;
            x = x / 10;
            if (a > 214748364 || 
                (a == 214748364 && temp > 7)) {
                return 0;
            }

            if (a < -214748364 || 
                (a == -214748364 && temp < -8)) {
                return 0;
            }

            a = a * 10 + temp;
        }

        return a;
    }
};