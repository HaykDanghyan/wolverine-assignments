#include <iostream>
#include <string>

bool endsWith(const std::string& text, const std::string& substr) {
    return (text.substr(text.length() - substr.length(), substr.length()) == substr);
}

int main() {
    std::cout << std::boolalpha << endsWith("hello world", "hello") << std::endl;
    return 0;
}