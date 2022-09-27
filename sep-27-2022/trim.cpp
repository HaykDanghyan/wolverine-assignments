#include <iostream>
#include <vector>
#include <string>
#include "header.h"

void trim(std::string& str) {
    int i = 0;
    while (str[i] == ' ') {
        str.erase(str.begin() + i);
    }
    int count = 0;
    for (int i = str.length() - 1; i >= 0; --i) {
        if (str[i] == ' ') {
            ++count;
        } else {
            break;
        }
    }
    int size = str.length() - count;
    str.erase(size, count);
}

int main() {
    std::string str = "  hello  ";
    trim(str);
    std::cout << "a" << str  << "a" << std::endl;
}