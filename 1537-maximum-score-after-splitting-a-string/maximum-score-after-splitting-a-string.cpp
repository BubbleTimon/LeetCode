class Solution {
public:
    int maxScore(string s) {
        int ret = 0;
        for (int i = 1; i < s.length(); i++) {
            int count = 0;

            for (int j = 0; j < i; j++) {
                if (s[j] == '0')
                    count++;
            }

            for (int k = i; k < s.length(); k++) {
                if (s[k] == '1')
                    count++;
            }

            ret = max(ret, count);
        }

        return ret;
    }
};