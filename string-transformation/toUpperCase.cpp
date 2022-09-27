#include <iostream>
#include <string>

std::string toUpperCase(const std::string& str) {
    std::string res{};
    for (auto ch : str) {
        if (ch >= 'a' and ch <= 'z') {
            ch -= 32;
            res += ch;
        } else {
            res += ch;
        }
    }
    return res;
}

int main() {
    std::cout << toUpperCase("hayk") << std::endl;
    return 0;
}