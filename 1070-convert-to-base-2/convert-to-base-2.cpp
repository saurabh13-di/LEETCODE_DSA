class Solution {
public:
    string baseNeg2(int n) {
        if (n == 0) return "0";

        string res = "";

        while (n != 0) {
            int rem = n % (-2);
            n = n / (-2);

            if (rem < 0) {
                rem += 2;
                n += 1;
            }

            res += char('0' + rem);
        }

        reverse(res.begin(), res.end());

        return res;
    }
};