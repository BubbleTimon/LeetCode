class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int length = pref.length();
        int ret = 0;
        for (string& str : words) {
            if (str.find(pref) == 0)
                ret++;
        }

        return ret;
    }
};