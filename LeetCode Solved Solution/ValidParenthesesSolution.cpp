#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char c : s) {

        // Opening brackets
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        }

        // Closing bracket
        else {
            if (st.empty()) {
                return false;
            }

            char top = st.top();

            if ((c == ')' && top != '(') ||
                (c == '}' && top != '{') ||
                (c == ']' && top != '[')) {
                return false;
            }

            st.pop();
        }
    }

    // If stack is empty, everything was matched
    return st.empty();
}

int main() {
    string s;

    cin >> s;

    if (isValid(s))
        cout << "true";
    else
        cout << "false";

    return 0;
}
