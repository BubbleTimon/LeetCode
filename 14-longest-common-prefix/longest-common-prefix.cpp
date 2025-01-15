class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ret = "";
        string str;
        str.resize(201);
        
        for (auto& s : strs)
            if (s.length() < str.length())
                str = s;

        for (int i = 0; i < str.length(); i++) {
            bool isSame = true;
            char ch = str[i];
            for (int j = 0; j < strs.size(); j++)
                if (strs[j][i] != ch) {
                    isSame = false;
                    break;
                }

            if (!isSame)
                break;

            ret += ch;
        }

        return ret;
    }
};

