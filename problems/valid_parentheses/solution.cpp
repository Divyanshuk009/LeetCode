class Solution {
public:
    bool isValid(string exp) {
        stack<char> st;

        for (int i = 0; i < exp.length(); i++) {

            char ch = exp[i];
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } else {
               
                if (!st.empty()) {
                     char Top = st.top();
                    if ((ch == ')' && Top == '(') ||
                        (ch == '}' && Top == '{') ||
                        (ch == ']' && Top == '[')) {
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
        }
        return st.empty();
    }
};