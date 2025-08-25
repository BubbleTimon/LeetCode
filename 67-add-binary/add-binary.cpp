class Solution {
public:
    string addBinary(string a, string b) {
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        if (a.size() < b.size())
            swap(a, b);

        while (a.size() != b.size())
            b.push_back('0');

        string str = "";
        int idx = 0;
        int n = 0;
        while (idx != a.size()) {
            int now = a[idx] - '0' + b[idx] - '0' + n;
            str.push_back((now % 2) + '0');
            if (now >= 2)
                n = 1;
            else
                n = 0;

            idx++;
        } 
        
        if (n == 1)
            str.push_back('1');

        reverse(str.begin(), str.end());
        return str;
    }
};