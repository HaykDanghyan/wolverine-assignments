#include <iostream>
#include <string>
#include <vector>
#include "header.h"

std::vector<std::string> split(const std::string& str, const std::string& delimiter) {
    std::vector<std::string> res;
    std::string token{};
    int i = 0;
    bool flag = false;
    while (i <= str.length()) {
        if (delimiter.find(str[i]) != -1) {
            ++i;
            flag = true;
        }
        if (flag) {
            res.push_back(token);
            token.clear();
            flag = false;
        }
        token += str[i];
        ++i;
    }
    res.push_back(token);
    return res;
}

int main() {
    auto res = split("hell:oworl,dbro)", ":,)");
    for (const auto& el : res) {
        std::cout << el << "  ";
    }
    std::cout << std::endl;
    return 0;
}