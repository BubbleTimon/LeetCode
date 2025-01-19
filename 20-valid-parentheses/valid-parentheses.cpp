class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> matching = {{')', '('}, {'}', '{'}, {']', '['}};
        
        for (char& ch : s) {
            if (matching.count(ch)) {  // 닫는 괄호일 경우
                if (st.empty() || st.top() != matching[ch]) 
                    return false;
                st.pop();
            } else {
                st.push(ch);  // 여는 괄호일 경우
            }
        }
        
        return st.empty();  // 스택이 비어 있으면 유효한 괄호 문자열

        // bool ret = true;
        // for (char& ch : s) {
        //     if (ch == '(' || ch == '{' || ch == '[') st.push(ch);
        //     else if (st.empty()) {
        //         ret = false;
        //         break;
        //     }
        //     else if (ch == ')' && st.top() == '(') st.pop();
        //     else if (ch == '}' && st.top() == '{') st.pop();
        //     else if (ch == ']' && st.top() == '[') st.pop();
        //     else {
        //         ret = false;
        //         break;
        //     }
        // }
        // return st.empty();
    }
};