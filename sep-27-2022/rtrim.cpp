#include <iostream>
#include <vector>
#include <algorithm>
#include "header.h"

bool is_char(const char ch) {
	return ((ch <= 'a' and ch >= 'z') and (ch >= 'A' and ch <= 'Z'));
}

void rtrim(std::string& str) {
	for (int i = str.length() - 1; i >= 0; --i) {
		if (str[i] == ' ') {
			str.erase(str.begin() + i);
		}	
		if (is_char(str[i])) {
			break;
		}
	}
}

int main() {
	std::string str = "hello        ";
	rtrim(str);
	std::cout << str << "a";
	return 0;
}
