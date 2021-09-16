#include <iostream>
#include <stack>
#include <unordered_map>


using namespace std;

int main() {
    ios::sync_with_stdio(false); cin.tie(nullptr);

    stack<char> stk;
    unordered_map<char, char> bracketMap = {
            {')','('},
            {']','['},
            {'}','{'}
    };

    int l; cin >> l;
    cin.get();  // catch the \n

    for (int i=0; i<l; i++) {
        char c; cin.get(c);  // used get to capture whitespace too
        switch(c) {
            case '(':
            case '[':
            case '{':
                stk.push(c);
                break;
            case ')':
            case ']':
            case '}':
                if (stk.empty() || stk.top() != bracketMap[c]) {
                    cout << c << " " << i << endl;
                    return 0;
                }
                stk.pop();
                break;
            default:
                continue;
        }
    }
    cout << "ok so far" << endl;
}
