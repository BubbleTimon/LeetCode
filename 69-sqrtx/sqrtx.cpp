class Solution {
public:
    int mySqrt(int x) {
        long long i = 0;
        while (true) {
            if (i * i <= x)
                i++;
            else
                break;
        }

        return i - 1;
    }
};