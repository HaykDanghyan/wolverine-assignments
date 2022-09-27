#include <iostream>
#include <string>
#include <vector>
#include "header.h"

bool is_char(const char ch) {
	return ((ch <= 'a' and ch >= 'z') and (ch >= 'A' and ch <= 'Z'));
}

void ltrim(std::string& str) {
    int i = 0;  
    while (!is_char(str[i]) and str[i] == ' ') {
        str.erase(str.begin() + i);
    }
}

int main() {
    std::string str = "                         barev                                                         hello";
    ltrim(str);
    std::cout << "a" << str << std::endl;
    return 0;
}