#include <iostream>
#include <string>

std::string toLowerCase(const std::string& str) {
    std::string res{};
    for (auto ch : str) {
        if (ch >= 'A' and ch <= 'Z') {
            ch += 32;
            res += ch;
        } else {
            res += ch;
        }
    }
    return res;
}

int main() {
    std::cout << toLowerCase("HAYK") << std::endl;
    return 0;
}