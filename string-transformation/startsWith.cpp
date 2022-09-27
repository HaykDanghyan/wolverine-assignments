#include <iostream>
#include <string>

bool startsWith(const std::string& text, const std::string& substr) {
    return (text.substr(0, substr.length()) == substr);
}

int main() {
    std::cout << std::boolalpha << startsWith("hello world", "hello") << std::endl;
    return 0;
}
