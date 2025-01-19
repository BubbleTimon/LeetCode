class Solution {
public:
    bool isValid(string s) {
        bool ret = true;
        stack<char> st;

        for (char& ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') st.push(ch);
            else if (st.empty()) {
                ret = false;
                break;
            }
            else if (ch == ')' && st.top() == '(') st.pop();
            else if (ch == '}' && st.top() == '{') st.pop();
            else if (ch == ']' && st.top() == '[') st.pop();
            else {
                ret = false;
                break;
            }
        }

        if (st.empty() == false)
            ret = false;
            
        return ret;
    }
};