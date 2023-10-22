#include <iostream>
#include <stack>
#include <string>

bool isBalanced(const std::string& str) {
    std::stack<char> stack;

    for (char ch : str) {
        if (ch == '(') {
            stack.push(ch);
        } else if (ch == ')') {
            if (stack.empty() || stack.top() != '(') {
                return false;
            }
            stack.pop();
        }
    }

    return stack.empty();
}

int main() {
    std::string input;
    std::cout << "Enter a string of parentheses: ";
    std::cin >> input;

    if (isBalanced(input)) {
        std::cout << "The parentheses are balanced." << std::endl;
    } else {
        std::cout << "The parentheses are not balanced." << std::endl;
    }

    return 0;
}