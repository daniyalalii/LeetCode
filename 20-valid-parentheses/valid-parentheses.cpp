class Solution {
public:
    bool isValid(string s) {
        int top = -1;
        for (char c : s) {
            if (c == '[' || c == '{' || c == '(')
                s[++top] = c;
            else {
                if (top == -1)
                    return false;
                if ((c == ')' && s[top] != '(') ||
                    (c == ']' && s[top] != '[') || (c == '}' && s[top] != '{')) return false;
            top--;
            }
        }
        return top == -1;
    }
};