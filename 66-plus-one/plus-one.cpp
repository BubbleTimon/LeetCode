class Solution
{
    public:
        vector<int> plusOne(vector<int> &digits) {
            int sum = 0;
            int exp = 0;
            int num = 0;
            int mod = 0;

            vector<int> ret;

            for (int i = digits.size() - 1; i >= 0; --i) {
                if (i == digits.size() - 1)
                    sum = digits[i] + 1;
                else
                    sum = digits[i] + exp;
                
                exp = sum / 10;
                num = sum % 10;
                ret.push_back(num);
            }
            if (exp)
                ret.push_back(exp);

            reverse(ret.begin(), ret.end());
            return ret;
        }
};